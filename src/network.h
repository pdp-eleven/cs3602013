typedef typename unsigned char octet;

struct NetInit{

  unsigned int port; //IN

  unsigned octet IPv4Address[4]; //IN

  BYTE* dataInSt; //INOPT
  BYTE* dataInEn; //INOPT

  BYTE** dataOutSt; //OUTOPT
  
  unsigned int retransmitCount; //INOPT
  unsigned int pauseDuration; //INOPT

  HANDLE fileIn; //INOPT
  HANDLE fileOut; //OUTOPT
  

};


//ttx_m(), "TCP Transmit Memory": connects to IPv4Address on port and sends data located at dataIn as specified by dataArea. The  IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
netcode ttx_m( NetInit* init );


//ttx_f(), "TCP Transmit File": connects to init.IPv4Address on init.port and sends the contents of the file attached to the handle init.fileIn. 
netcode ttx_f(NetInit* init);


//utx_m(), "UDP Transmit Memory": sends the data at init.dataInSt to IPv4Address on port, then repeats this action the number of times specified by init.retransmitCount, pausing for init.pauseDuration seconds between each transmission.
netcode utx_m(NetInit* init);
 

//txt_f(), "TCP Reverse Transmit File": binds to init.IPv4Address on port and listens for a connection. When a connection is made, the data located at init.dataInSt is sent to the connected host.
netcode txt_f( NetInit* init);


//rx(), "Receive": binds to init.IPv4Address on port and listens for connections. Stores the address of the received data at the address pointed to by init.dataOutSt. The calling context is responsible for delete()/[]ing or free[]/()ing the memory at this location, and is guaranteed to be the only context with a pointer to it. 
netcode rx(unsigned int port, unsigned octet IPv4Address[], MemBoundry dataOut);


//rx(), "Receive": binds to IPv4Address on port and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The  IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.
  netcode rx(unsigned int port, unsigned octet IPv4Address[], HANDLE dataOut);
  

  //xr(...), "Reverse Receive": connects to IPv4Address on port and writes any data recieved to dataOut.highest_block. The  IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode xr(unsigned int port, unsigned octet IPv4Address[], MemBoundry dataArea, MemBoundry dataOut);


  //xr(...), "Reverse Receive": connects to IPv4Address on port and writes any data recieved to the file attached to the handle dataIn. The IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 
  netcode xr(unsigned int port, unsigned octet IPv4Address[], HANDLE dataIn);


}
