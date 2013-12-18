//ORCA: Online Routine Control & Automation - universal.h

//Peter Blencowe

//The Universal Toolkit namespace holds all functions and structs that will later be used to build classes.

#include <windows.h>
#include <winsock.h>
#pragma comment(lib, "ws2_32.lib")

namespace utk{

  //constants

  //typedef Types:
  typedef  char* filepath;
  typedef  unsigned int countable;
  typedef  char* compilername;
  
  typedef unsigned char octet;

  
  //Long and short invocation option signatures, static addresses also function as a program wide identifier. 
  const char* AES_KEY[] = { "-k", "--aes-key" };
  const char* BACKGROUND[] = {"-B, --background"};
  const char* BROADCAST_ADDRESS[] = {"-b", "--broadcast-address"};
  const char* BROADCAST_ITERATIVE[] = {"-i", "--broadcast-iterative"};
  const char* BROADCAST_REPEATS[] = {"-r", "--broadcast-repeat"};
  const char* BROADAST_PAUSE[] = {"-p", "--broadcast-pause"};
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

  
  //Runtime Environment Functions and Classes
  const char** resolve_dependency(char** codeIn){
  
    return DEP_FAILURE_NOS;

  }


  template class CommandLine{

    template <typename argtype> class InvocationOption{
      argtype argumentText; 
      argtype argumentValue; 
      bool active; 
      bool resolved;
    };

    invocationOption<filepath> aesKey;
    invocationOption<bool> background;
    invocationOption<ipv4address> broadcastAddress;
    invocationOption<bool> broadcastIterative;
    invocationOption<countable> broadcastRepeat;
    invocationOption<countable> broadcastPause;
    invocationOption<countable> broadcastReturnWindow;
    invocationOption<countable> cache;
    invocationOption<filepath> configurationFile;
    invocationOption<filepath> dataFile;
    invocationOption<filepath> dataSha256;
    invocationOption<countable> dataReturnWindow;
    invocationOption<countable> dataSendWindow;
    invocationOption<bool> discover;
    invocationOption<filepath> fileOut;
    invocationOption<filepath> handler;
    invocationOption<bool> laxConformanceCheck;
    invocationOption<bool> respond;
    invocationOption<filepath> routineLibrary;
    invocationOption<filepath> routineSource;
    invocationOption<countable> scratchSize;
    invocationOption<bool> sendByIp;
    invocationOption<bool> sendByName;
    invocationOption<bool> sendByUuid;
    invocationOption<bool> sendAll;
    invocationOption<filepath> librarySha256;
    invocationOption<filepath> sourceSha256;
    invocationOption<filepath> forceCompiler;
    invocationOption<bool> strictConformanceCheck;
    invocationOption<char*> forceCompilerOptions;

    CommandLine(){
      #include "universal.d/includes.d/CommandLine.CommandLine.cpp"
    }
    

  }; //end CommandLine




  //General Structures:

  struct MemBoundry{
    void* highAddress;
    void* lowAddress;
    size_t blockSize;
  };


  template<typename dataType> struct AutotypedBoundry{
    dataType* highBlock;
    dataType* lowBlock;
  };




  const char** tx(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataIn){
#include "universal.d/includes.d/tx_uint_octet_MemBoundry.cpp"  
  }


  
  const char** tx(unsigned int tcpPort, octet IPv4Address[], HANDLE dataIn){
#include "universal.d/includes.d/tx_uint_octet_HANDLE.cpp"
  }
  

  const char** tx(unsigned int udpPort, octet IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn){
#include "universal.d/includes.d/tx_uint_octet_uint_uint_MemBoundry.cpp"
  }
 

  const char** xt(unsigned int port, octet IPv4Address[], HANDLE dataOut){
#include "universal.d/includes.d/xt_uint_octet_HANDLE.cpp"
  }


  const char** rx(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataOut){
#include "universal.d/includes.d/rx_uint_octet_MemBoundry.cpp"
  }



  const char** rx(unsigned int tcpPort, octet IPv4Address[], HANDLE dataOut){
#include "universal.d/includes.d/rx_uint_octet_HANDLE.cpp"
  }
  

  
  const char** xr(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataOut){
#include "universal.d/includes.d/xr_uint_octet_MemBoundry.cpp"
  }

  
  const char** xr(unsigned int tcpPort, octet IPv4Address[], HANDLE dataIn){
#include "universal.d/includes.d/xr_uint_octet_HANDLE.cpp"
  }


}


