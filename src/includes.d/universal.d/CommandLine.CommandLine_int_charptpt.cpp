int position = 0;
int subposition = 0;
bool exitFlag = FALSE;
HANDLE file = INVALID_HANDLE_VALUE;


//First pass, detect all options an possible argument values.
while( position < argc ){

#undef OPTION
#undef MEMBER
#define MEMBER aesKey
#define OPTION AES_KEY	
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    } 
  }


#undef OPTION
#undef MEMBER
#define MEMBER background
#define OPTION BACKGROUND
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    } 
  }

#undef OPTION
#undef MEMBER
#define MEMBER broadcastAddress
#define OPTION BROADCAST_ADDRESS
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    } 
  }

  
#undef OPTION
#undef MEMBER
#define MEMBER broadcastIterative
#define OPTION BROADCAST_ITERATIVE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  } 


  
#undef OPTION
#undef MEMBER
#define MEMBER broadcastRepeat
#define OPTION BROADCAST_REPEATS
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastPause
#define OPTION BROADCAST_PAUSE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastReturnWindow
#define OPTION BROADCAST_RETURN_WINDOW
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  
  }

#undef OPTION
#undef MEMBER
#define MEMBER cache
#define OPTION CACHE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER configurationFile
#define OPTION CONFIGURATION_FILE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }

  }

#undef OPTION
#undef MEMBER
#define MEMBER dataFile
#define OPTION DATA_FILE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER dataSha256
#define OPTION DATA_SHA256
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER dataReturnWindow
#define OPTION DATA_RETURN_WINDOW
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }

      
#undef OPTION
#undef MEMBER
#define MEMBER dataSendWindow
#define OPTION DATA_SEND_WINDOW
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }

      
#undef OPTION
#undef MEMBER
#define MEMBER discover
#define OPTION DISCOVER
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER encryption
#define OPTION ENCRYPTION
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }




#undef OPTION
#undef MEMBER
#define MEMBER fileOut
#define OPTION FILE_OUT
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER handler
#define OPTION HANDLER
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER laxConformanceCheck
#define OPTION LAX_CONFORMANCE_CHECK
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }



#undef OPTION
#undef MEMBER
#define MEMBER respond
#define OPTION RESPOND
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER routineLibrary
#define OPTION ROUTINE_LIBRARY
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER routineSource
#define OPTION ROUTINE_SOURCE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER scratchSize
#define OPTION SCRATCH_SIZE
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER sendByIp
#define OPTION SEND_BY_IP
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }

  
#undef OPTION
#undef MEMBER
#define MEMBER sendByName
#define OPTION SEND_BY_NAME
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }



#undef OPTION
#undef MEMBER
#define MEMBER sendByUuid
#define OPTION SEND_BY_UUID
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }	


#undef OPTION
#undef MEMBER
#define MEMBER sendAll
#define OPTION SEND_ALL
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }



#undef OPTION
#undef MEMBER
#define MEMBER librarySha256
#define OPTION LIBRARY_SHA256
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER sourceSha256
#define OPTION SOURCE_SHA256
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER forceCompiler
#define OPTION FORCE_COMPILER
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
   
  }


#undef OPTION
#undef MEMBER
#define MEMBER strictConformanceCheck
#define OPTION STRICT_CONFORMANCE_CHECK
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    }
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }


#undef OPTION
#undef MEMBER
#define MEMBER forceCompilerOptions
#define OPTION FORCE_COMPILER_OPTIONS
  subposition = 0;
  if( (MEMBER.active == FALSE) && (argv[position][subposition] == '-') ){
    while( (argv[position][subposition] != '\0') && (OPTION[SHORT_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[SHORT_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[SHORT_SIGNATURE][subposition] == '\0') ){
      MEMBER.active = TRUE;
      if( (position + 1) < argc ){
	MEMBER.argumentText = argv[position + 1]; 
      } else {
	MEMBER.argumentText = NULL;
      }
      position++;
      continue;
    } 
    subposition = 0;
    while( (argv[position][subposition] != '\0') && (OPTION[LONG_SIGNATURE][subposition] != '\0') ){
      if( argv[position][subposition] != OPTION[LONG_SIGNATURE][subposition]){
	break;
      }
      subposition++;
    }
    if( (argv[position][subposition] == '\0') && (OPTION[LONG_SIGNATURE][subposition] == '\0') ){
      aesKey.active = TRUE;
      if( (position + 1) < argc ){
	aesKey.argumentText = argv[position + 1]; 
      } else {
	aesKey.argumentText = NULL;
      }
      position++;
      continue;
    }
  }

  position++;
  
 }



//Second pass, resolve dependencies of the detected options:

#undef OPTION
#undef MEMBER
#define MEMBER aesKey
#define OPTION AES_KEY
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
  
  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }

 }


#undef OPTION
#undef MEMBER
#define MEMBER background
#define OPTION BACKGROUND
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastAddress
#define OPTION BROADCAST_ADDRESS
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
  
  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires an IPv4 address argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( inet_addr(MEMBER.argumentText) == INADDR_NONE){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid IPv4 address argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }

  
 }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastIterative
#define OPTION BROADCAST_ITERATIVE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastRepeat
#define OPTION BROADCAST_REPEATS
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if (atoi(MEMBER.argumentText) <= 0){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }
  
 }


#undef OPTION
#undef MEMBER
#define MEMBER broadcastPause
#define OPTION BROADCAST_PAUSE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if (atoi(MEMBER.argumentText) <= 0){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }
  
 }



#undef OPTION
#undef MEMBER
#define MEMBER broadcastReturnWindow
#define OPTION BROADCAST_RETURN_WINDOW
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if (atoi(MEMBER.argumentText) <= 0){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }
  
 }


#undef OPTION
#undef MEMBER
#define MEMBER cache
#define OPTION CACHE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }



#undef OPTION
#undef MEMBER
#define MEMBER configurationFile
#define OPTION CONFIGURATION_FILE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }


 }


#undef OPTION
#undef MEMBER
#define MEMBER dataFile
#define OPTION DATA_FILE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
  
  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    exitFlag = TRUE;
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
  }
  
 }


#undef OPTION
#undef MEMBER
#define MEMBER dataSha256
#define OPTION DATA_SHA256
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER dataSha256
#define OPTION DATA_SHA256
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }

#undef OPTION
#undef MEMBER
#define MEMBER dataReturnWindow
#define OPTION DATA_RETURN_WINDOW
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if (atoi(MEMBER.argumentText) <= 0){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }

 }

#undef OPTION
#undef MEMBER
#define MEMBER dataSendWindow
#define OPTION DATA_SEND_WINDOW
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if (atoi(MEMBER.argumentText) <= 0){
    printf("ERROR: %s/%s requires a number of seconds > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  }

 }

#undef OPTION
#undef MEMBER
#define MEMBER discover
#define OPTION DISCOVER
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }

#undef OPTION
#undef MEMBER
#define MEMBER encryption
#define OPTION ENCRYPTION
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }

#undef OPTION
#undef MEMBER
#define MEMBER fileOut
#define OPTION FILE_OUT
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE; 
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE; 
  }
    
 }

#undef OPTION
#undef MEMBER
#define MEMBER handler
#define OPTION HANDLER
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
  
  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE; 
  }

 }


#undef OPTION
#undef MEMBER
#define MEMBER laxConformanceCheck
#define OPTION LAX_CONFORMANCE_CHECK
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER respond
#define OPTION RESPOND
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER routineLibrary
#define OPTION ROUTINE_LIBRARY
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE; 
  }

 }


#undef OPTION
#undef MEMBER
#define MEMBER routineSource
#define OPTION ROUTINE_SOURCE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a file path argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if ( !PathFileExists(MEMBER.argumentText) ){
    printf("ERROR: Could not resolve %s; %s/%s requires a valid file path argument, quitting.\n", MEMBER.argumentText, OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE; 
  }

 }


#undef OPTION
#undef MEMBER
#define MEMBER scratchSize
#define OPTION SCRATCH_SIZE
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);

  if(MEMBER.argumentText == NULL){
    printf("ERROR: %s/%s requires a number of kilobytes > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE;
  } else if (atoi(MEMBER.argumentText) <= 0){
    printf("ERROR: %s/%s requires a number of kilobytes > 0 as an argument, quitting.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
    exitFlag = TRUE; 
  }

 }

#undef OPTION
#undef MEMBER
#define MEMBER sendByIp
#define OPTION SEND_BY_IP
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER sendByName
#define OPTION SEND_BY_NAME
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER sendByUuid
#define OPTION SEND_BY_UUID
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER sendAll
#define OPTION SEND_ALL
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER librarySha256
#define OPTION LIBRARY_SHA256
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }

#undef OPTION
#undef MEMBER
#define MEMBER sourceSha256
#define OPTION SOURCE_SHA256
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }

#undef OPTION
#undef MEMBER
#define MEMBER strictConformanceCheck
#define OPTION STRICT_CONFORMANCE_CHECK
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }

#undef OPTION
#undef MEMBER
#define MEMBER forceCompiler
#define OPTION FORCE_COMPILER
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }


#undef OPTION
#undef MEMBER
#define MEMBER forceCompilerOptions
#define OPTION FORCE_COMPILER_OPTIONS
if(MEMBER.active){
  printf("WARNING: %s/%s not implemented, ignoring.\n", OPTION[LONG_SIGNATURE], OPTION[SHORT_SIGNATURE]);
 }



if( (!respond.active) && (!sendByIp.active) &&  (!sendByUuid.active) && (!sendByName.active) && (!sendAll.active) && (!discover.active) ){
  
  printf("ERROR: No major mode selected, quitting.\n");
  exitFlag = true;
  
 }


if(exitFlag){
  
  exit(1);

 }
