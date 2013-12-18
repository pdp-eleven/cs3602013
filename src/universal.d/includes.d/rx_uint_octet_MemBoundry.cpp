  //rx(...), "Receive": binds to IPv4Address on tcpPort and listens for connections. Stores the address of the received data at the address pointed to by dataOut. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. The calling context is responsible for delete()/[]ing or free[]/()ing the memory at this location, and is guaranteed to be the only context with a pointer to it. 

  
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
