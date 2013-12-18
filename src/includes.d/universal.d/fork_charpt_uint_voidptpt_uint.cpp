HANDLE fork( const char* entryPointName, unsigned int entryPointNameSz, void** bridge, unsigned int bridgeSz ){

  utk::DWORDOverArray pid;
  
  DWORD pidB64Sz;
  DWORD voidPointerB64Sz;
  DWORD dwordB64Sz;

  char* commandLineB64;
  
  PROCESS_INFORMATION p_info;
  STARTUPINFO s_info;


  memset( &p_info, NULL, sizeof(p_info) );
  memset( &s_info, NULL, sizeof(s_info) );
 
  s_info.cb = sizeof(s_info);

  pid.dword = GetProcessId( GetCurrentProcess() );
       
  CryptBinaryToString( pid.array, sizeof(DWORD), CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, NULL, &pidB64Sz );
  CryptBinaryToString( (BYTE*)bridge, sizeof(void*), CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, NULL, &voidPointerB64Sz );

  commandLineB64 = (char*)malloc( sizeof(char) * (pidB64Sz + voidPointerB64Sz + entryPointNameSz + 7) );

  CryptBinaryToString( pid.array, sizeof(DWORD), CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, &commandLineB64[0], &pidB64Sz );
  CryptBinaryToString( (BYTE*)bridge, sizeof(void*), CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, &commandLineB64[pidB64Sz + 1], &voidPointerB64Sz );

  /*Build command line for the forked process*/
  commandLineB64[pidB64Sz] = ' ';
  commandLineB64[ pidB64Sz + voidPointerB64Sz + 1 ] = ' ';
  commandLineB64[ pidB64Sz + voidPointerB64Sz + 2 ] = 17;
  commandLineB64[ pidB64Sz + voidPointerB64Sz + 3 ] = ' ';
  memcpy( (void*)&commandLineB64[ pidB64Sz + voidPointerB64Sz + 4 ], entryPointName, entryPointNameSz - 1);
  commandLineB64[ pidB64Sz + voidPointerB64Sz + voidPointerB64Sz + 5 ] = ' ';

  CreateProcess("orca.exe", commandLineB64, NULL, NULL, TRUE, 0, NULL, NULL, &s_info, &p_info );

  free(commandLineB64);

return p_info.hProcess;
}
