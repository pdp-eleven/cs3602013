//ORCA: Online Routine Control & Automation - universal.h

//Peter Blencowe

//The Universal Toolkit namespace holds all functions and structs that will later be used to build classes.

#include <windows.h>
#include <winsock.h>
#include "Shlwapi.h"

#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "ws2_32.lib")

namespace utk{

  union DWORDOverArray{
    DWORD dword;
    BYTE array[sizeof(DWORD)];
  };

  
  union VoidPointerOverArray{
    void* voidPointer;
    BYTE array[sizeof(void*)];
  };


  
  //Long and short invocation option signatures, static addresses also function as a program wide identifier. 
  const char* AES_KEY[] = { "-k", "--aes-key" };
  const char* BACKGROUND[] = {"-B, --background"};
  const char* BROADCAST_ADDRESS[] = {"-b", "--broadcast-address"};
  const char* BROADCAST_ITERATIVE[] = {"-i", "--broadcast-iterative"};
  const char* BROADCAST_REPEATS[] = {"-r", "--broadcast-repeat"};
  const char* BROADCAST_PAUSE[] = {"-p", "--broadcast-pause"};
  const char* BROADCAST_RETURN_WINDOW[] = {"-R", "--broadcast-return-window"};
  const char* CACHE[] = {"-C", "--cache"};
  const char* CONFIGURATION_FILE[] = {"-c", "--configuration-file"};
  const char* DATA_FILE[] = {"-d", "--data-file"};
  const char* DATA_SHA256[] = {"-T", "--data-sha256"};
  const char* DATA_RETURN_WINDOW[] = {"-w", "--data-return-window"};
  const char* DATA_SEND_WINDOW[] = {"-W", "--data-send-window"};
  const char* DISCOVER[] = {"-D", "--discover"};
  const char* ENCRYPTION[] = {"-e", "--encryption"};
  const char* FILE_OUT[] = {"-f", "--file-out"};
  const char* HANDLER[] = {"-H", "--handler"};
  const char* LAX_CONFORMANCE_CHECK[] = {"-l", "--lax-conformance-check"};
  const char* RESPOND[] = {"-r", "--respond"};
  const char* ROUTINE_LIBRARY[] = {"-L", "--routine-library"};
  const char* ROUTINE_SOURCE[] = {"-S", "--routine-source"};
  const char* SCRATCH_SIZE[] = {"-s", "--scratch-size"};
  const char* SEND_BY_IP[] = {"-I", "--send-by-ip"};
  const char* SEND_BY_NAME[] = {"-N", "--send-by-name"};
  const char* SEND_BY_UUID[] = {"-U", "--send-by-uuid"};
  const char* SEND_ALL[] = {"-A", "--send-all"};
  const char* LIBRARY_SHA256[] = {"-h", "--library-sha256"};
  const char* SOURCE_SHA256[] = {"-X", "--source-sha256"};
  const char* STRICT_CONFORMANCE_CHECK[] = {"-O", "--strict-conformance-check"};
  const char* FORCE_COMPILER[] = {"-F", "--force-compiler"};
  const char* FORCE_COMPILER_OPTIONS[] = {"-o", "--force-compiler-options"};
  
  //Access codes for option signatures
  const char SHORT_SIGNATURE = 0;
  const char LONG_SIGNATURE= 1;
    
  //Return codes for network functions
  const char* NET_SUCCESS_NOS[] = {new char(0), "Success, Not Otherwhise Specified"};
  const char* NET_FAILURE_NOS[] = {new char(1),  "Failure, Not Otherwhise Specified"};
  const char* NET_FAILURE_ACCEPT_SOCKET[] = {new char(2), "Failure, could not accept remote socket"};
  const char* NET_FAILURE_BIND_SOCKET[] = {new char(3), "Failure, could not bind to local socket"};
  const char* NET_FAILURE_LISTEN_SOCKET[] = {new char(4), "Failure, could not listen on local socket"};
  const char* NET_FAILURE_ACQUIRE_SOCKET[] = {new char(5), "Failure, could not acquire local socket"};
  const char* NET_FAILURE_CONNECT_SOCKET[] = {new char(6), "Failure, could not connect to remote socket"};
  const char* NET_FAILURE_BUFFER_ALLOCATION[] = {new char(7), "Failure, failed to allocate buffer"};
  const char* NET_FAILURE_OVERSIZE_TRANSMISSION[] = {new char(8), "Failure, transmission too long"};
  
  
  //Access codes for network return codes
  const char NET_CODE = 0;
  const char NET_MESSAGE = 1;

  //Return codes for dependency resolution
  const char* DEP_SUCCESS_NOS[] = {new char(0), "Success, Not Otherwhise Specified"};
  const char* DEP_FAILURE_NOS[] = {new char(1), "Failure, Not Otherwhise Specified"};
 
  //Access codes for dependency return codes
  const char DEP_CODE = 0;
  const char DEP_MESSAGE = 1;

  //Return codes for memory access
  const char* MEMAX_SUCCESS_NOS[] = {new char(0), "Success, Not Otherwhise Specified"};
  const char* MEMAX_FAILURE_NOS[] = {new char(1), "Failure, Not Otherwhise Specified"};
  
  //Access codes for memory access return code
  const char MEM_AX_CODE = 0;
  const char MEM_AX_MESSAGE = 1;

  //Return codes for memory access
  const char* FILE_AX_SUCCESS_NOS[] = {new char(0), "Success, Not Otherwhise Specified"};
  const char* FILE_AX_FAILURE_NOS[] = {new char(1), "Failure, Not Otherwhise Specified"};
  
  //Access codes for memory access return code
  const char FILE_AX_CODE = 0;
  const char FILE_AX_MESSAGE = 1;

  
  class CommandLine{

  public:

    template <typename argtype> class InvocationOption{
    public:
      char* argumentText; 
      argtype argumentValue; 
      bool active; 
      bool resolved;

      InvocationOption(){
	active = FALSE; 
	resolved = FALSE;
      };

    };


    InvocationOption<char*> aesKey;
    InvocationOption<bool> background;
    InvocationOption<char*> broadcastAddress;
    InvocationOption<bool> broadcastIterative;
    InvocationOption<unsigned int> broadcastRepeat;
    InvocationOption<unsigned int> broadcastPause;
    InvocationOption<unsigned int> broadcastReturnWindow;
    InvocationOption<unsigned int> cache;
    InvocationOption<char*> configurationFile;
    InvocationOption<char*> dataFile;
    InvocationOption<char*> dataSha256;
    InvocationOption<unsigned int> dataReturnWindow;
    InvocationOption<unsigned int> dataSendWindow;
    InvocationOption<bool> discover;
    InvocationOption<bool> encryption;
    InvocationOption<char*> fileOut;
    InvocationOption<char*> handler;
    InvocationOption<bool> laxConformanceCheck;
    InvocationOption<bool> respond;
    InvocationOption<char*> routineLibrary;
    InvocationOption<char*> routineSource;
    InvocationOption<unsigned int> scratchSize;
    InvocationOption<bool> sendByIp;
    InvocationOption<bool> sendByName;
    InvocationOption<bool> sendByUuid;
    InvocationOption<bool> sendAll;
    InvocationOption<char*> librarySha256;
    InvocationOption<char*> sourceSha256;
    InvocationOption<char*> forceCompiler;
    InvocationOption<bool> strictConformanceCheck;
    InvocationOption<char*> forceCompilerOptions;



    CommandLine(int argc, char* argv[]){
#include "includes.d/universal.d/CommandLine.CommandLine_int_charptpt.cpp"
    };
    

  }; 




  //General Structures:
  struct MemBoundry{
    void* highAddress;
    void* lowAddress;
    size_t blockSize;
  };



  //network functions

  const char** tx(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataIn);
#include "includes.d/universal.d/tx_uint_octetpt_MemBoundry.cpp"
  
  
  const char** tx(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);
#include "includes.d/universal.d/tx_uint_octetpt_HANDLE.cpp"
  
  

  const char** tx(unsigned int udpPort, unsigned char IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn);
#include "includes.d/universal.d/tx_uint_octetpt_uint_uint_MemBoundry.cpp"
  
 

  const char** xt(unsigned int port, unsigned char IPv4Address[], HANDLE dataOut);
#include "includes.d/universal.d/xt_uint_octetpt_HANDLE.cpp"
  


  const char** rx(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataOut);
#include "includes.d/universal.d/rx_uint_octetpt_MemBoundry.cpp"
 


  const char** rx(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataOut);
#include "includes.d/universal.d/rx_uint_octetpt_HANDLE.cpp"
 
  

  
  const char** xr(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataOut);
#include "includes.d/universal.d/xr_uint_octetpt_MemBoundry.cpp"


  
  const char** xr(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);
#include "includes.d/universal.d/xr_uint_octetpt_HANDLE.cpp"
  


  //process control functions

  HANDLE fork( const char* entryPointName, unsigned int entryPointNameSz, void** bridge, unsigned int bridgeSz );
#include "includes.d/universal.d/fork_charpt_uint_voidptpt_uint.cpp"



  typedef int (*EXPORTABLE)(void*, HANDLE);
  
  int fork( int argc, char* argv[] );
#include "includes.d/universal.d/fork_int_charptpt.cpp"



  /* Exported Entry Points of the form: */
//extern "C" int __declspec(dllexport) NAME(void*);

}


