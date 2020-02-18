%module i2pd
%{
/* Includes the header in the wrapper code */
#include "Config.h"
#include "FS.h"
#include "Base.h"
#include "version.h"
#include "Transports.h"
#include "NTCPSession.h"
#include "RouterInfo.h"
#include "RouterContext.h"
#include "Tunnel.h"
#include "HTTP.h"
#include "NetDb.hpp"
#include "Garlic.h"
#include "Streaming.h"
#include "Destination.h"
#include "Crypto.h"
#include "Timestamp.h"
#include "util.h"
#include "Event.h"
#include "Tunnel.h"
#include "Transports.h"
#include "NetDb.hpp"
#include "HTTP.h"
#include "LeaseSet.h"
#include "Destination.h"
#include "RouterContext.h"
#include "version.h"
%}

/* Parse the header file to generate wrappers */
%include Config.h
%include FS.h
%include Base.h
%include version.h
%include Transports.h
%include NTCPSession.h
%include RouterInfo.h
%include RouterContext.h
%include Tunnel.h
%include HTTP.h
%include NetDb.hpp
%include Garlic.h
%include Streaming.h
%include Destination.h
%include Crypto.h
%include Timestamp.h
%include util.h
%include Event.h
%include Tunnel.h
%include Transports.h
%include NetDb.hpp
%include HTTP.h
%include LeaseSet.h
%include Destination.h
%include RouterContext.h
%include version.h
