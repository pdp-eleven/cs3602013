const char** tx(unsigned int udpPort, unsigned char IPv4Address[], unsigned int retransmitCount, unsigned int pauseDuration, MemBoundry dataIn){
//tx(...), "Transmit": sends the data at memBoundry.highestBlock to IPv4Address on udpPort, repeats this action the number of times specified by retransmitCount, pausing for pauseDuration seconds between each transmission. The argument IPv4Address is assumed to be exactly four bytes long, with each byte representing a single octet. 

return (const char**)utk::NET_FAILURE_NOS;

}
