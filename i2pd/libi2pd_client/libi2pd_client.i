%module i2pdclient
%{
/* Includes the header in the wrapper code */
#include "AddressBook.h"
#include "BOB.h"
#include "ClientContext.h"
#include "HTTPProxy.h"
#include "I2CP.h"
#include "I2PService.h"
#include "I2PTunnel.h"
#include "MatchedDestination.h"
#include "SAM.h"
#include "SOCKS.h"
#include "Websocket.h"
#include "WebSocks.h"
%}

/* Parse the header file to generate wrappers */
%include "AddressBook.h"
%include "BOB.h"
%include "ClientContext.h"
%include "HTTPProxy.h"
%include "I2CP.h"
%include "I2PService.h"
%include "I2PTunnel.h"
%include "MatchedDestination.h"
%include "SAM.h"
%include "SOCKS.h"
%include "Websocket.h"
%include "WebSocks.h"
