const char** tx(unsigned int tcpPort, unsigned char IPv4Address[], MemBoundry dataIn){

  //tx(...), "Transmit": connects to IPv4Address on tcpPort and sends data located at dataIn as specified by dataArea. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 

  WORD winsockVersion = MAKEWORD(1, 1);
  SOCKET rxSocket;
  WSADATA rxData;
  SOCKADDR_IN rxInfo;
    
  unsigned long txSize = ((char*)dataIn.highAddress - (char*)dataIn.lowAddress);

  if( ((char*)dataIn.highAddress - (char*)dataIn.lowAddress) > ULONG_MAX ){ 
    return (const char**)utk::NET_FAILURE_OVERSIZE_TRANSMISSION;
  }

  
  WSAStartup(winsockVersion, &rxData);

  rxSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

  if(rxSocket == INVALID_SOCKET){
    WSACleanup();
    return (const char**)utk::NET_FAILURE_ACQUIRE_SOCKET;
  }
  
  rxInfo.sin_family = AF_INET;
  rxInfo.sin_addr.S_un.S_un_b.s_b1 = IPv4Address[0];
  rxInfo.sin_addr.S_un.S_un_b.s_b2 = IPv4Address[1];
  rxInfo.sin_addr.S_un.S_un_b.s_b3 = IPv4Address[2];
  rxInfo.sin_addr.S_un.S_un_b.s_b4 = IPv4Address[3];
  rxInfo.sin_port = htons(tcpPort);
    
  if( connect(rxSocket, (LPSOCKADDR)&rxInfo, sizeof(sockaddr) ) == SOCKET_ERROR){
    WSACleanup();
    return (const char**)utk::NET_FAILURE_CONNECT_SOCKET;
  }


  send(rxSocket, (char*)&txSize, sizeof(unsigned long), 0);
  send(rxSocket, (char*)dataIn.lowAddress, txSize, 0);

  closesocket(rxSocket);
  WSACleanup();

  return (const char**)utk::NET_SUCCESS_NOS;
}
