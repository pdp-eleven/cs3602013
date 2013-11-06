//ORCA: Online Routine Control & Automation - universal.h

//Peter Blencowe

//The Universal Toolkit namespace holds all functions and structs that will later be used to build classes.


namespace utk{

  //typedef Types:
  typedef char** depcode;  
  typedef char** netcode;
  typedef char** memaxcode;
  typedef cahr** fileaxcode;
  typedef char** optioncode;
  typedef char** fastcompcode;
  
  typedef typename char* filepath;
  typedef typename char* hostname;
  typedef typename char* ipv4address;
  typedef typename unsigned int countable;
  typedef typename char* compilername;
  typedef typename char* uuid;

  

  //fastcomp() related constants
  const fastcompcode 

  //Byte stream header delineation and sizing
  const char DATA_LENGTH_FIELD = 0;
  const char SOURCE_LENGTH_FIELD = 4;
  const char BINARY_LENGTH_FIELD = 8;
  const char BYTESTREAM_HEAD_LENGTH = 12;


  //Long and short invocation option signatures, static addresses also function as a program wide identifier. 
  const optioncode AES_KEY = {"-k", "--aes-key"};
  const optioncode BACKGROUND = {"-B, --background"};
  const optioncode BROADCAST_ADDRESS = {"-b", "--broadcast-address"};
  const optioncode BROADCAST_ITERATIVE = {"-i", "--broadcast-iterative"};
  const optioncode BROADCAST_REPEATS = {"-r", "--broadcast-repeat"};
  const optioncode BROADAST_PAUSE = {"-p", "--broadcast-pause"};
  const optioncode BROADCAST_RETURN_WINDOW = {"-R", "--broadcast-return-window"};
  const optioncode CACHE = {"-C", "--cache"};
  const optioncode CONFIGURATION_FILE = {"-c", "--configuration-file"};
  const optioncode DATA_FILE = {"-d", "--data-file"};
  const optioncode DATA_SHA256 = {"-T", "--data-sha256"};
  const optioncode DATA_RETURN_WINDOW = {"-w", "--data-return-window"};
  const optioncode DATA_SEND_WINDOW = {"-W", "--data-send-window"};
  const optioncode DISCOVER = {"-D", "--discover"};
  const optioncode ENCRYPTION = {"-e", "--encryption"};
  const optioncode FILE_OUT = {"-f", "--file-out"};
  const optioncode HANDLER = {"-H", "--handler"};
  const optioncode LAX_CONFORMANCE_CHECK = {"-l", "--lax-conformance-check"};
  const optioncode RESPOND = {"-r", "--respond"};
  const optioncode ROUTINE_LIBRARY = {"-L", "--routine-library"};
  const optioncode ROUTINE_SOURCE = {"-S", "--routine-source"};
  const optioncode SCRATCH_SIZE = {"-s", "--scratch-size"};
  const optioncode SEND_BY_IP = {"-I", "--send-by-ip"};
  const optioncode SEND_BY_NAME = {"-N", "--send-by-name"};
  const optioncode SEND_BY_UUID = {"-U", "--send-by-uuid"};
  const optioncode SEND_ALL = {"-A", "--send-all"};
  const optioncode LIBRARY_SHA256 = {"-h", "--library-sha256"};
  const optioncode SOURCE_SHA256 = {"-X", "--source-sha256"};
  const optioncode STRICT_CONFORMANCE_CHECK = {"-O", "--strict-conformance-check"};
  const optioncode FORCE_COMPILER = {"-F", "--force-compiler"};
  const optioncode FORCE_COMPILER_OPTIONS = {"-o", "--force-compiler-options"};
  
  //Access codes for option signatures
  const char SHORT_SIGNATURE = 0;
  const char LONG_SIGNATURE= 1;
    
  //Return codes for network functions
  const netcode SUCCESS_NOS = {new char(0), "Success, Not Otherwhise Specified"};
  const netcode FAILURE_NOS = {new char(1),  "Failure, Not Otherwhise Specified"};
  
  //Access codes for network return codes
  const char NET_CODE = 0;
  const char NET_MESSAGE = 1;

  //Return codes for dependency resolution
  const depcode SUCCESS_NOS = {new char(0), "Success, Not Otherwhise Specified"};
  const depcode FAILURE_NOS = {new char(1), "Failure, Not Otherwhise Specified"};
  
  //Access codes for dependency return codes
  const char DEP_CODE = 0;
  const char DEP_MESSAGE = 1;

  //Return codes for memory access
  const memaxcode SUCCESS_NOS = {new char(0), "Success, Not Otherwhise Specified"};
  const memaxcode FAILURE_NOS = {new char(1), "Failure, Not Otherwhise Specified"};
  
  //Access codes for memory access return code
  const char MEM_AX_CODE = 0;
  const char MEM_AX_MESSAGE = 1;

  //Return codes for memory access
  const fileaxcode SUCCESS_NOS = {new char(0), "Success, Not Otherwhise Specified"};
  const fileaxcode FAILURE_NOS = {new char(1), "Failure, Not Otherwhise Specified"};
  
  //Access codes for memory access return code
  const char FILE_AX_CODE = 0;
  const char FILE_AX_MESSAGE = 1;

  


  //General Structures:

  struct MemBoundry{

    void* highestBlock;
    void* lowestBlock;
    size_t blockSize;
    
  };


  template<typename datatype> struct AutotypedBoundry {

    dataType* highestBlock;
    dataType* lowestBlock;
   
  }

  
  //Runtime Environment Functions
  depcode resolve_dependency(optioncode codeIn);
  
  

  //Network Functions:

  memaxcode mkbytestream( MemBoundry datInDataIn, MemBoundry DataInSourceIn, MemBoundry, Memboundry dataInBinaryIn, dataOut void* )


  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends data located at dataIn as specified by dataArea. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode tx(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataArea, MemBoundry dataIn);


  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends the contents of the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode tx(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);


  //tx(...), "Transmit": sends the data at memBoundry.highestBlock to IPv4Address on udpPort, repeats this action the number of times specified by retransmitCount, pausing for pauseDuration seconds between each transmission. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode tx(unsigned int udpPort, unsigned char IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn);
 

  //xt(...), "Reverse Transmit": binds to IPv4Address on tcpPort and listens for a connection. When a connection is made, the data located at dataIn.highestBlock is sent to the connected host. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode xt(unsigned int port, unsigned char IPv4Address[], HANDLE dataOut);


  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores the address of the received data at the address pointed to by dataOut. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. The calling context is responsible for delete()/[]ing or free[]/()ing the memory at this location, and is guaranteed to be the only context with a pointer to it. 
  netcode rx(unsigned int port, unsigned char IPv4Address[], MemBoundry dataOut);


  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.
  netcode rx(unsigned int port, unsigned char IPv4Address[], HANDLE dataOut);
  

  //xr(...), "Reverse Receive": connects to IPv4Address on tcpPort and writes any data recieved to dataOut.highest_block. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode xr(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataArea, MemBoundry dataOut);


  //xr(...), "Reverse Receive": connects to IPv4Address on tcpPort and writes any data recieved to the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode xr(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);


}
