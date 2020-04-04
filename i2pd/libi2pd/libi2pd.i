

%module libi2pd

%include "stl.i"
%include "std_string.i"
%include "shared_ptr.i"

%rename("Compare") operator==;
%rename("Assign") operator=;
%rename("Minus") operator-;
%rename("InlineMinus") operator-=;
%rename("Plus") operator+;
%rename("InlinePlus") operator+=;

%rename("Insertion") operator<<;
%rename("SizeOf") operator^=;

%rename("C%s") "i2p::fs::Init";

namespace std {
     template <class T> class enable_shared_from_this {
     public:
         ~enable_shared_from_this();
         shared_ptr<T> shared_from_this();
         shared_ptr<const T> shared_from_this() const;
     protected:
         enable_shared_from_this();
         enable_shared_from_this(const enable_shared_from_this &);
     };
}

%{
    /* Includes the header in the wrapper code */
    #include "api.h"
    #include "Base.h"
    #include "Blinding.h"
    #include "BloomFilter.h"
    #include "ChaCha20.h"
    #include "Config.h"
    #include "CPU.h"
    #include "Crypto.h"
    #include "CryptoKey.h"
    #include "CryptoWorker.h"
    #include "Datagram.h"
    #include "Destination.h"
    #include "Ed25519.h"
    #include "Event.h"
    #include "Family.h"
    #include "FS.h"
    #include "Garlic.h"
    #include "Gost.h"
    #include "Gzip.h"
    #include "HTTP.h"
    #include "I2NPProtocol.h"
    #include "I2PEndian.h"
    #include "Identity.h"
    #include "LeaseSet.h"
    #include "LittleBigEndian.h"
    #include "Log.h"
    #include "NetDbRequests.h"
    #include "NTCP2.h"
    #include "NTCPSession.h"
    #include "Poly1305.h"
    #include "Profiling.h"
    #include "Queue.h"
    #include "Reseed.h"
    #include "RouterContext.h"
    #include "RouterInfo.h"
    #include "Signature.h"
    #include "Siphash.h"
    #include "SSUData.h"
    #include "SSU.h"
    #include "SSUSession.h"
    #include "Streaming.h"
    #include "Tag.h"
    #include "Timestamp.h"
    #include "TransitTunnel.h"
    #include "TransportSession.h"
    #include "Transports.h"
    #include "TunnelBase.h"
    #include "TunnelConfig.h"
    #include "TunnelEndpoint.h"
    #include "TunnelGateway.h"
    #include "Tunnel.h"
    #include "TunnelPool.h"
    #include "util.h"
    #include "version.h"
%}

/* Parse the header file to generate wrappers */
%include "api.h"
%include "Base.h"
%include "Blinding.h"
%include "BloomFilter.h"
%include "ChaCha20.h"
%include "Config.h"
%include "CPU.h"
%include "Crypto.h"
%include "CryptoKey.h"
%include "CryptoWorker.h"
%include "Datagram.h"
%include "Destination.h"
%include "Ed25519.h"
%include "Event.h"
%include "Family.h"
%include "FS.h"
%include "Garlic.h"
%include "Gost.h"
%include "Gzip.h"
%include "HTTP.h"
%include "I2NPProtocol.h"
%include "I2PEndian.h"
%include "Identity.h"
%include "LeaseSet.h"
%include "LittleBigEndian.h"
%include "Log.h"
%include "NetDbRequests.h"
%include "NTCP2.h"
%include "NTCPSession.h"
%include "Poly1305.h"
%include "Profiling.h"
%include "Queue.h"
%include "Reseed.h"
%include "RouterContext.h"
%include "RouterInfo.h"
%include "Signature.h"
%include "Siphash.h"
%include "SSUData.h"
%include "SSU.h"
%include "SSUSession.h"
%include "Streaming.h"
%include "Tag.h"
%include "Timestamp.h"
%include "TransitTunnel.h"
%include "TransportSession.h"
%include "Transports.h"
%include "TunnelBase.h"
%include "TunnelConfig.h"
%include "TunnelEndpoint.h"
%include "TunnelGateway.h"
%include "Tunnel.h"
%include "TunnelPool.h"
%include "util.h"
%include "version.h"

%template(SDatagramSession) std::enable_shared_from_this< i2p::datagram::DatagramSession >;
%template(SLeaseSetDestination) std::enable_shared_from_this< i2p::client::LeaseSetDestination >;

%template(STag) i2p::data::Tag< 32 >;

%template(SGarlicRoutingSession) std::enable_shared_from_this< i2p::garlic::GarlicRoutingSession >;
%template(SNTCP2Session) std::enable_shared_from_this< i2p::transport::NTCP2Session >;
%template(SNTCPSession) std::enable_shared_from_this< i2p::transport::NTCPSession >;
%template(SSSUSession) std::enable_shared_from_this< i2p::transport::SSUSession >;
%template(SStream) std::enable_shared_from_this< i2p::stream::Stream >;
%template(SStreamingDestination) std::enable_shared_from_this< i2p::stream::StreamingDestination >;
%template(SInboundTunnel) std::enable_shared_from_this< i2p::tunnel::InboundTunnel >;
%template(SOutboundTunnel) std::enable_shared_from_this< i2p::tunnel::OutboundTunnel >;
%template(STunnelPool) std::enable_shared_from_this< i2p::tunnel::TunnelPool >;
