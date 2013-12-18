const char** rx(unsigned int tcpPort, unsigned char IPv4Address[], HANDLE dataOut){

  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores at the address pointed to by dataOut a handle for a file containing the data received. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. This function is required to call the CreateFile(...) function with the attributes FILE_ATTRIBUTE_TEMPORARY and FILE_ATTRIBUTE_HIDDEN, as well as the flag FILE_FLAG_DELETE_ON_CLOSE set. The calling context is responsible for releasing the file handle correctly, and is guaranteed to be the only context with a handle to the file.

  return (const char**)utk::NET_FAILURE_NOS;
}
