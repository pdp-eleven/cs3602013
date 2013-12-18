int fork( int argc, char* argv[] ){
  HANDLE parent;
  HMODULE self;
  EXPORTABLE entryPoint;
  utk::DWORDOverArray pid;
  utk::VoidPointerOverArray bridge;
  DWORD DWORDSz = sizeof(DWORD);
  DWORD voidPointerSz = sizeof(void*);
  utk::DWORDOverArray bridgeSz;
  DWORD readOut = 0;

  CryptStringToBinary( argv[0], 0, CRYPT_STRING_BASE64, pid.array, &DWORDSz, NULL, NULL );
  CryptStringToBinary( argv[1], 0, CRYPT_STRING_BASE64, bridge.array, &voidPointerSz, NULL, NULL );

  parent = OpenProcess( PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE , pid.dword );
  
  self = GetModuleHandle("orca.exe");
  
  if( !self ){
    exit(1);
  }

  printf(argv[3]);
  
  entryPoint = (EXPORTABLE)GetProcAddress(self, argv[3]);
   
  return( entryPoint(bridge.voidPointer, parent) );

}

