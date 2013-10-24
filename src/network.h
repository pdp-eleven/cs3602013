#include "universal.h"

class Transmitter{
  
private:

  //Memory values to transmit.
  utk::mem_boundry target;

  //Win32 handle to a file containing values to transmit. 
  HANDLE targetf; 
  
  //The first IPv4 address to which transmissions will be sent.
  utk::IPv4Address addressRangeStart;

  //The last IPv4 address to which transmissions will be sent.
  utk::IPv4Address addressRangeEnd;

  //The remote port to which all transmissions will be sent
  utk::unsigned int port;
  
  //The protocol with which the transmission will be sent (TCP or UDP)
  utk::transportProtocol protocol;

  //The number of times the message will be automatically resent to the same address
  unsigned int autoRetransmits;

  //The number of seconds to wait before resending.
  unsigned int autoRetransmitInterval;

 
public: 
  
  //Set the target to a file, nullifies all existing targets
  utk::netcode settarget(HANDLE dataIn);

  //Set the target to a location in memory, nullifies all existing targets
  utk::netcode settarget(utk::mem_boundry dataIn);

  //Specify only the protocol and the port. Sets both addressRangeStart and addressRangeEnd to the network broadcast address for UDP. Calculates addressRangeEnd and addressRangeStart using the current network mask.
  utk::netcode setdestination(utk::transportProtocol protocol, unsigned int port);

  //Specify the protocol, an address and the destination port, addressRangeEnd is implicitly set to addressRangeStart.
  utk::netcode setdestination(utk::transportProtocol protocol, utk::IPvAddress address, unsigned int port );
  
  //Specify the protocol, the start and end of an addresses and the destination port.
  utk::netcode setdestination(utk::transportProtocol protocol, utk::IPvAddress startAddress, utk::IPvAddress endAddress, unsigned int port);

  //Sets the number times a transmission should be sent to any address
  utk::netcode setretransmits(unsigned int count);

  //Sets the period of time to wait between resends, no effect if autoRetransmits is zero.
  utk::netcode retransmitinterval(unsigned int seconds);

  //transmits the target using the current configuration.
  utk::netcode transmit();
  
  //If transmitting from a location in memory, nullify target and write its old values to dataOut.
  utk::netcode transmit(mem_boundry dataOut);

  //If transmitting from a file, nullify targetf and write its old values to dataOut.
  utk::netcode transmit(HANDLE dataOut);
  
};


class Receiver{

private:

  //Memory values to transmit.
  utk::mem_boundry target;
  
  //Win32 handle to a file containing values to transmit. 
  HANDLE targetf; 


public:

  //Set the target to a file, nullifies all existing targets
  void settarget(HANDLE dataIn);

  //Set the target to a location in memory, nullifies all existing targets
  void settarget(utk::mem_boundry dataIn);
  
  void setorigin()


  
}
