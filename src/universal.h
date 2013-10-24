//The Universal Toolkit namespace holds all functions and structs that will later be used to build classes.

namespace utk{

  //typedef Types
  
  typedef unsigned long netcode;
  
  
  //Constants
  const netcode SUCCESS_NOS = 0;
  const netcode FAILURE_NOS = 1;
  
 

  //General Structures:

  struct MemBoundry{

    void* highestBlock;
    void* lowestBlock;
    size_t blockSize;

  };


  template<typename dataType> struct AutotypedBoundry {

    dataType* highestBlock;
    dataType* lowestBlock;
   
  }



  //Network Functions:

  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends data located at dataIn as specified by dataArea. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ////////////////////////////////////////////////////////////////////////////////////////////////
  void tx(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataArea, MemBoundry dataIn);


  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends the contents of the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ///////////////////////////////////////////////////////////////////////////
  void tx(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);


  //tx(...), "Transmit": sends the data at memBoundry.highestBlock to IPv4Address on udpPort, repeats this action the number of times specified by retransmitCount, pausing for pauseDuration seconds between each transmission. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  void tx(unsigned int udpPort, unsigned char IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn);
 

  //xt(...), "Reverse Transmit": binds to IPv4Address on tcpPort and listens for a connection. When a connection is made, the data located at dataIn.highestBlock is sent to the connected host. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ////////////////////////////////////////////////////////////////////////////////////
  MemBoundry xt(unsigned int port, unsigned char IPv4Address[], MemBoundry dataIn);


  //xt(...), "Reverse Transmit": binds to IPv4Address on tcpPort and listens for a connection. When a connection is made, the contents of the file attached to the handle dataIn is sent to the connected host. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ///////////////////////////////////////////////////////////////////////////
  void xt(unsigned int port, unsigned char IPv4Address[], HANDLE dataOut);


  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores the address of the received data at the address pointed to by dataOut. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. The calling context is responsible for delete()/[]ing or free[]/()ing the memory at this location, and is guaranteed to be the only context with a pointer to it. 
  ////////////////////////////////////////////////////////////////////////////////
  MemBoundry rx(unsigned int port, unsigned char IPv4Address[], MemBoundry dataOut);


  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.
  ///////////////////////////////////////////////////////////////////////////
  void rx(unsigned int port, unsigned char IPv4Address[], HANDLE dataOut);
  

  //xr(...), "Reverse Receive": connects to IPv4Address on tcpPort and writes any data recieved to dataOut.highest_block. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ///////////////////////////////////////////////////////////////////////////////////////////////////////
  void xr(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataArea, MemBoundry dataOut);


  //xr(...), "Reverse Receive": connects to IPv4Address on tcpPort and writes any data recieved to the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ///////////////////////////////////////////////////////////////////////////
  void xr(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);


}
