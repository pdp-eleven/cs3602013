#define WIN32_LEAN_AND_MEAN
#define STRICT
#pragma comment(lib, "Crypt32.lib")
#pragma comment(lib, "advapi32.lib")
#include <windows.h>
#include <stdio.h>
#include <Process.h>
#include <Wincrypt.h>
#include <stdlib.h>
#include "universal.h"

using namespace utk;

int main( int argc, char* argv[] ){
  
  /* trap the special command line and fork */
  if( (argc == 4) && (argv[2][0] == 17) ){
    return( fork(argc, argv) );
  }
  
  
  
  return 1;

}

