unsigned int position = 0;
unsigned int subposition = 0;
HANDLE file = INVALID_HANDLE_VALUE;

while( position < argc ){
  
  position++;


#undef OPTION
#undef MEMBER
#define MEMBER aesKey
#define OPTION AES_KEY	
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    aesKey.active = TRUE;
    if( (position + 1) < argc ){
      aesKey.argumentText = argv[position + 1]; 
    } else {
      aesKey.argumentText = NULL;
    }
    continue;
  }



#undef OPTION
#undef MEMBER
#define MEMBER background
#define OPTION BACKGROUND
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }



#undef OPTION
#undef MEMBER
#define MEMBER broadcastAddress
#define OPTION BROADCAST_ADDRESS
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
  
  
#undef OPTION
#undef MEMBER
#define MEMBER broadcastIterative
#define OPTION BROADCAST_ITERATIVE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }

  
#undef OPTION
#undef MEMBER
#define MEMBER broadcastRepeat
#define OPTION BROADCAST_REPEAT
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastPause
#define OPTION BROADCAST_PAUSE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastReturnWindow
#define OPTION BROADCAST_RETURN_WINDOW
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
  

#undef OPTION
#undef MEMBER
#define MEMBER cache
#define OPTION CACHE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER configurationFile
#define OPTION CONFIGURATION_FILE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER dataFile
#define OPTION DATA_FILE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER dataSha256
#define OPTION DATA_SHA256
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER dataReturnWindow
#define OPTION DATA_RETURN_WINDOW
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }

      
#undef OPTION
#undef MEMBER
#define MEMBER dataSendWindow
#define OPTION DATA_SEND_WINDOW
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }

      
#undef OPTION
#undef MEMBER
#define MEMBER discover
#define OPTION DISCOVER
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER fileOut
#define OPTION FILE_OUT
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER handler
#define OPTION HANDLER
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER laxConformanceCheck
#define OPTION LAX_CONFORMANCE_CHECK
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER respond
#define OPTION RESPOND
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER routineLibrary
#define OPTION ROUTINE_LIBRARY
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER routineSource
#define OPTION ROUTINE_SOURCE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
  
  
#undef OPTION
#undef MEMBER
#define MEMBER scratchSize
#define OPTION SCRATCH_SIZE
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
  
  
#undef OPTION
#undef MEMBER
#define MEMBER sendByIp
#define OPTION SEND_BY_IP
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
  
  
#undef OPTION
#undef MEMBER
#define MEMBER sendByName
#define OPTION SEND_BY_NAME
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER sendByUuid
#define OPTION SEND_BY_UUID
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
	

#undef OPTION
#undef MEMBER
#define MEMBER sendAll
#define OPTION SEND_ALL
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER librarySha256
#define OPTION LIBRARY_SHA256
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER sourceSha256
#define OPTION SOURCE_SHA_256
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER forceCompiler
#define OPTION FORCE_COMPILER
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
    

#undef OPTION
#undef MEMBER
#define MEMBER strictConformanceCheck
#define OPTION STRICT_CONFORMACNE_CHECK
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }


#undef OPTION
#undef MEMBER
#define MEMBER forceCompilerOptions
#define OPTION FORCE_COMPILER_OPTIONS
  subposition = 0;
  while( (argv[position][subposition] != '\0') && (OPTION[position][subposition] != '\0') ){
    if( argv[position][subposition] != OPTION[position][subposition]){
      break;
    }
    subposition++;
  }
  if( (argv[position][subposition] == '\0') && (OPTION[position][subposition] == '\0') ){
    MEMBER.active = TRUE;
    if( (position + 1) < argc ){
      MEMBER.argumentText = argv[position + 1]; 
    } else {
      MEMBER.argumentText = NULL;
    }
    continue;
  }
  
 } //end population loop

} //end constructor



