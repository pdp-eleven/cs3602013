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

  

  template class CommandLine{

    template <typename argtype> class InvocationOption{
      argtype argument; 
      bool active; 
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
    invocationOption<ipv4address> sendByIp;
    invocationOption<hostname> sendByName;
    invocationOption<ipv4address> sendByUuid;
    invocationOption<bool> sendAll;
    invocationOption<filepath> librarySha256;
    invocationOption<filepath> sourceSha256;
    invocationOption<filepath> forceCompiler;
    invocationOption<bool> strictConformanceCheck;
    invocationOption<char*> forceCompilerOptions;

    CommandLine(){
      
      unsigned int position = 0;
      unsigned int subposition = 0;
      HANDLE file = INVALID_HANDLE_VALUE;
      
      while( position < argc ){
       
	position++;


#undef OPTION
#define OPTION AES_KEY	
	subposition = 0;
	while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
	  if( argv[position][subposition] != OPTION[position][subposition]){
	    break;
	  }
	}
	if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
	  aesKey.active = TRUE;
	  
	  file = createFile(argv[position + 1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL)
	  if(   )
	  

	  aesKey.argument; 	  
	}


#undef OPTION 
#define OPTION  



      }
      

    }


   

  };



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

  
  //Runtime Environment Functions
  const char** resolve_dependency(char** codeIn){
    return DEP_FAILURE_NOS;
  }

  
  //Network Functions
  const char** mkbytestream( MemBoundry datInDataIn, MemBoundry DataInSourceIn, MemBoundry, MemBoundry dataInBinaryIn, MemBoundry dataOut ){
    return MEMAX_FAILURE_NOS;
  }


  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends data located at dataIn as specified by dataArea. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  const char** tx(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataIn){
  
    WORD winsockVersion = MAKEWORD(1, 1);
    SOCKET rxSocket;
    WSADATA rxData;
    SOCKADDR_IN rxInfo;
    
    unsigned long txSize = ((char*)dataIn.highAddress - (char*)dataIn.lowAddress);
    
    if( ((char*)dataIn.highAddress - (char*)dataIn.lowAddress) > ULONG_MAX ){ 
      return NET_FAILURE_OVERSIZE_TRANSMISSION;
    }

  
    WSAStartup(winsockVersion, &rxData);
    
    rxSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  
    if(rxSocket == INVALID_SOCKET){
      WSACleanup();
      return NET_FAILURE_ACQUIRE_SOCKET;
    }
  
    rxInfo.sin_family = AF_INET;
    rxInfo.sin_addr.S_un.S_un_b.s_b1 = IPv4Address[0];
    rxInfo.sin_addr.S_un.S_un_b.s_b2 = IPv4Address[1];
    rxInfo.sin_addr.S_un.S_un_b.s_b3 = IPv4Address[2];
    rxInfo.sin_addr.S_un.S_un_b.s_b4 = IPv4Address[3];
    rxInfo.sin_port = htons(tcpPort);
    
    if( connect(rxSocket, (LPSOCKADDR)&rxInfo, sizeof(sockaddr) ) == SOCKET_ERROR){
      WSACleanup();
      return NET_FAILURE_CONNECT_SOCKET;
    }


    send(rxSocket, (char*)&txSize, sizeof(unsigned long), 0);
    send(rxSocket, (char*)dataIn.lowAddress, txSize, 0);

    closesocket(rxSocket);
    WSACleanup();

    return NET_SUCCESS_NOS;

  }



  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends the contents of the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  const char** tx(unsigned int tcpPort, octet IPv4Address[], HANDLE dataIn){
    return NET_FAILURE_NOS;
  }
  

  //tx(...), "Transmit": sends the data at memBoundry.highestBlock to IPv4Address on udpPort, repeats this action the number of times specified by retransmitCount, pausing for pauseDuration seconds between each transmission. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  const char** tx(unsigned int udpPort, octet IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn){
    return NET_FAILURE_NOS;
  }
 

  //xt(...), "Reverse Transmit": binds to IPv4Address on tcpPort and listens for a connection. When a connection is made, the data located at dataIn.highestBlock is sent to the connected host. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  const char** xt(unsigned int port, octet IPv4Address[], HANDLE dataOut){
    return NET_FAILURE_NOS;
  }
  



  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores the address of the received data at the address pointed to by dataOut. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. The calling context is responsible for delete()/[]ing or free[]/()ing the memory at this location, and is guaranteed to be the only context with a pointer to it. 
  const char** rx(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataOut){
  
    WORD winsockVersion = MAKEWORD(1,1);
    WSADATA rxData;
    SOCKET rxSocket, txSocket;
    SOCKADDR_IN rxInfo;
    unsigned long txSize;
    
    dataOut.lowAddress = NULL;
    dataOut.highAddress = NULL;
    dataOut.blockSize = 1;

    WSAStartup(winsockVersion, &rxData);
    
    rxInfo.sin_family = AF_INET;
    rxInfo.sin_addr.S_un.S_un_b.s_b1 = IPv4Address[0];
    rxInfo.sin_addr.S_un.S_un_b.s_b2 = IPv4Address[1];
    rxInfo.sin_addr.S_un.S_un_b.s_b3 = IPv4Address[2];
    rxInfo.sin_addr.S_un.S_un_b.s_b4 = IPv4Address[3];
    rxInfo.sin_port = htons(tcpPort);
    
    
    rxSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    if(rxSocket == INVALID_SOCKET){
      WSACleanup();
      return NET_FAILURE_ACQUIRE_SOCKET;
    }


    if(bind(rxSocket, (LPSOCKADDR)&rxInfo, sizeof(sockaddr)) == SOCKET_ERROR){
      WSACleanup();
      return NET_FAILURE_BIND_SOCKET;
    }

    
    if( listen(rxSocket, 1) == SOCKET_ERROR ){
      WSACleanup();
      return NET_FAILURE_LISTEN_SOCKET;
    }
    
 
    txSocket = accept(rxSocket, NULL, NULL);
    
    if( txSocket == INVALID_SOCKET ){
      WSACleanup();
      return NET_FAILURE_ACCEPT_SOCKET;
    }


    recv(rxSocket, (char*)&txSize, sizeof(unsigned long), 0);
    dataOut.lowAddress = malloc(txSize);
    
    if(dataOut.lowAddress == NULL){
      return NET_FAILURE_BUFFER_ALLOCATION;
    }
    
    dataOut.highAddress = ( (char*)dataOut.highAddress + txSize );
  
    recv(rxSocket, (char*)dataOut.lowAddress, txSize, 0);
        
    closesocket(txSocket);
    closesocket(rxSocket);
    WSACleanup();

    return NET_SUCCESS_NOS;
}



  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.
  const char** rx(unsigned int tcpPort, octet IPv4Address[], HANDLE dataOut){
    return NET_FAILURE_NOS;
  }
  

  //xr(...), "Reverse Receive": connects to IPv4Address on tcpPort and writes any data recieved to dataOut.highest_block. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  const char** xr(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataArea, MemBoundry dataOut){
    return NET_FAILURE_NOS;
  }

  
  //xr(...), "Reverse Receive": connects to IPv4Address on tcpPort and writes any data recieved to the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  const char** xr(unsigned int tcpPort, octet IPv4Address[], HANDLE dataIn){
    return NET_FAILURE_NOS;
  }


}


