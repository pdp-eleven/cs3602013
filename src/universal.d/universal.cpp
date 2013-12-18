#include "universal.h"

using namespace utk;

const char** resolve_dependency(char** codeIn){
  return DEP_FAILURE_NOS;
}

  

const char** mkbytestream( MemBoundry datInDataIn, MemBoundry DataInSourceIn, MemBoundry, MemBoundry dataInBinaryIn, MemBoundry dataOut ){
  return MEMAX_FAILURE_NOS;
}


const char** tx(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataArea, MemBoundry dataIn){
  
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



const char** tx(unsigned int tcpPort, octet IPv4Address[], HANDLE dataIn){
  return NET_FAILURE_NOS;
}



const char** tx(unsigned int udpPort, octet IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn){
  return NET_FAILURE_NOS;
}
 


const char** xt(unsigned int port, octet IPv4Address[], HANDLE dataOut){
  return NET_FAILURE_NOS;
}




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




const char** rx(unsigned int tcpPort, octet IPv4Address[], HANDLE dataOut){
  return NET_FAILURE_NOS;
}
  


const char** xr(unsigned int tcpPort, octet IPv4Address[], MemBoundry dataArea, MemBoundry dataOut){
  return NET_FAILURE_NOS;
}



const char** xr(unsigned int tcpPort, octet IPv4Address[], HANDLE dataIn){
  return NET_FAILURE_NOS;
}



