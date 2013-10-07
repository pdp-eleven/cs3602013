//The Universal Toolkit namespace holds all functions and structs that will later be used to build classes.



namespace utk{


  //General Structures:


  struct mem_boundry{
  
    void* highestBlock;

    void* lowestBlock;

    size_t blockSize;

  };



  template<typename dataType> struct autotyped_boundry {

    dataType* highestBlock;

    dataType* lowestBlock;
    
  }





  //Network Functions:


  //rx(...), "Recieve": binds to IPv4Address on tcpPort and listens for connections. Stores the address of the received data at the address pointed to by dataOut. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. The calling context is responsible for delete()/[]ing or free[]/()ing the memory at this location, and is guaranteed to be the only context with a pointer to it. 
  ////////////////////////////////////////////////////////////////////////////////
  mem_boundry rx(unsigned int port, unsigned char IPv4Address[], mem_boundry dataOut);


  //rx(...), "Recieve": binds to IPv4Address on tcpPort and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.
  ///////////////////////////////////////////////////////////////////////////
  void rx(unsigned int port, unsigned char IPv4Address[], HANDLE* dataOut);


  //tx(...), "Transmit": Connects to IPv4Address on tcpPort and sends data located at dataIn as specified by dataArea. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ////////////////////////////////////////////////////////////////////////////////////////////////
  void tx(unsigned int tcpPort, unsigned char IPv4Address[], mem_boundry dataArea, mem_boundry dataIn);


  //tx(...), "Transmit": Connects to IPv4Address on tcpPort and sends the contents of the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ///////////////////////////////////////////////////////////////////////////
  void tx(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);



  //xt(...), "Reverse Transmist": binds to IPv4Address on tcpPort and listens for a connection. When a connection is made, the data located at dataIn.highestBlock is sent to the connected host.
  ////////////////////////////////////////////////////////////////////////////////
  mem_boundry xt(unsigned int port, unsigned char IPv4Address[], mem_boundry dataIn);


  //Binds to IPv4Address on tcpPort and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.
  ///////////////////////////////////////////////////////////////////////////
  void xt(unsigned int port, unsigned char IPv4Address[], HANDLE* dataOut);


  //Connects to IPv4Address on tcpPort and sends data located at dataIn as specified by dataArea. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ////////////////////////////////////////////////////////////////////////////////////////////////
  void xr(unsigned int tcpPort, unsigned char IPv4Address[], mem_boundry dataArea, void* dataIn);


  //Connects to IPv4Address on tcpPort and sends the contents of the file attached to the handle dataIn. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  ///////////////////////////////////////////////////////////////////////////
  void xr(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataIn);



}
