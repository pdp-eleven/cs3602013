#define WIN32_LEAN_AND_MEAN
#define STRICT
#include <windows.h>
#include <stdio.h>
#include <Process.h>
#include <Wincrypt.h>
#include <stdlib.h>
#include "universal.h"
#pragma comment(lib, "Crypt32.lib")
#pragma comment(lib, "advapi32.lib")


union DWORDOverArray{
      DWORD dword;
      BYTE array[sizeof(DWORD)];
};


union VoidPointerOverArray{
      void* voidPointer;
      BYTE array[sizeof(void*)];
};


struct test{
  char CHAR;
  int INT;
  long LONG;
};

typedef int (*EXPORTABLE)(void*, HANDLE);


/* Exported Entry Points */
extern "C" int __declspec(dllexport) testSend(void* bridge, HANDLE parent);
extern "C" int __declspec(dllexport) testRec(void* bridge, HANDLE parent);
extern "C" int __declspec(dllexport) tp(void* bridge, HANDLE parent);

HANDLE fork( const char* entryPointName, unsigned int entryPointNameSz, void** bridge, unsigned int bridgeSz );
int fork( int argc, char* argv[] );



int main( int argc, char* argv[] ){
  
  /* trap the special command line and fork */
  if( (argc == 4) && (argv[2][0] == 17) ){
    return( fork(argc, argv) );
  }


  void* TESTport = VirtualAlloc(NULL, sizeof(test),  MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE  ); 
   
  WaitForSingleObject(fork("testSend", sizeof("testSend"), &TESTport, sizeof(TESTport)), INFINITE );

  //printf( (char*)TESTport );

  
  //WaitForSingleObject( fork("testRec", sizeof("testPrint"), NULL, 0), INFINITE);
  //WaitForSingleObject( fork("testRec", sizeof("testRec"), NULL, 0), INFINITE);
  //WaitForSingleObject( fork("testRec", sizeof("testSend"), NULL, 0), INFINITE );


  return 1;

}



HANDLE fork( const char* entryPointName, unsigned int entryPointNameSz, void** bridge, unsigned int bridgeSz ){

  DWORDOverArray pid;
  
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

  free commandLineB64;

  return p_info.hProcess;
       
}


int fork( int argc, char* argv[] ){


  HANDLE parent;
  HMODULE self;
  EXPORTABLE entryPoint;
  DWORDOverArray pid;
  VoidPointerOverArray bridge;
  DWORD DWORDSz = sizeof(DWORD);
  DWORD voidPointerSz = sizeof(void*);
  DWORDOverArray bridgeSz;
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



int testSend(void* bridge, HANDLE parent){

  unsigned int port = 8000;
  utk::octet address[4] = {127, 0, 0, 1};
  utk::MemBoundry message;

  message.lowAddress = (void*)"Hello, World\n";
  message.highAddress = ((char*)message.lowAddress + sizeof("Hello, World\n"));
  
  puts( utk::tx( port, address, message)[utk::NET_MESSAGE] );
  
  return 0;

}


int testRec(void* bridge, HANDLE parent){
  
  unsigned int port = 8000;
  utk::octet address[4] = {127, 0, 0, 1};
  utk::MemBoundry message;  

  puts( utk::rx( port, address, message)[utk::NET_MESSAGE] );
  
  puts( (const char*)message.lowAddress );

  return 0;
  
}


int tp(void* bridge, HANDLE parent){

  printf("TESTING\n");

  return 0;

}
