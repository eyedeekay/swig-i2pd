
export CGO_ENABLED=yes
CGO_ENABLED=yes

binding: get interface
	cp swig/libi2pd.i i2pd/libi2pd/
	cd i2pd/libi2pd/ && swig -gccgo -intgosize 32 -go libi2pd.i
	go build i2pd/libi2pd/i2pd.go

interface:
	@echo '%module i2pd' | tee swig/libi2pd.i
	@echo '%{' | tee -a swig/libi2pd.i
	@echo '/* Includes the header in the wrapper code */' | tee -a swig/libi2pd.i
	@echo '#include "Config.h"' | tee -a swig/libi2pd.i
	@echo '#include "FS.h"' | tee -a swig/libi2pd.i
	@echo '#include "Base.h"' | tee -a swig/libi2pd.i
	@echo '#include "version.h"' | tee -a swig/libi2pd.i
	@echo '#include "Transports.h"' | tee -a swig/libi2pd.i
	@echo '#include "NTCPSession.h"' | tee -a swig/libi2pd.i
	@echo '#include "RouterInfo.h"' | tee -a swig/libi2pd.i
	@echo '#include "RouterContext.h"' | tee -a swig/libi2pd.i
	@echo '#include "Tunnel.h"' | tee -a swig/libi2pd.i
	@echo '#include "HTTP.h"' | tee -a swig/libi2pd.i
	@echo '#include "NetDb.hpp"' | tee -a swig/libi2pd.i
	@echo '#include "Garlic.h"' | tee -a swig/libi2pd.i
	@echo '#include "Streaming.h"' | tee -a swig/libi2pd.i
	@echo '#include "Destination.h"' | tee -a swig/libi2pd.i
	@echo '#include "Crypto.h"' | tee -a swig/libi2pd.i
	@echo '#include "Timestamp.h"' | tee -a swig/libi2pd.i
	@echo '#include "util.h"' | tee -a swig/libi2pd.i
	@echo '#include "Event.h"' | tee -a swig/libi2pd.i
	@echo '#include "Tunnel.h"' | tee -a swig/libi2pd.i
	@echo '#include "Transports.h"' | tee -a swig/libi2pd.i
	@echo '#include "NetDb.hpp"' | tee -a swig/libi2pd.i
	@echo '#include "HTTP.h"' | tee -a swig/libi2pd.i
	@echo '#include "LeaseSet.h"' | tee -a swig/libi2pd.i
	@echo '#include "Destination.h"' | tee -a swig/libi2pd.i
	@echo '#include "RouterContext.h"' | tee -a swig/libi2pd.i
	@echo '#include "version.h"' | tee -a swig/libi2pd.i
	@echo '%}' | tee -a swig/libi2pd.i
	@echo '' | tee -a swig/libi2pd.i
	@echo '/* Parse the header file to generate wrappers */' | tee -a swig/libi2pd.i
	@echo %include "Config.h" | tee -a swig/libi2pd.i
	@echo %include "FS.h" | tee -a swig/libi2pd.i
	@echo %include "Base.h" | tee -a swig/libi2pd.i
	@echo %include "version.h" | tee -a swig/libi2pd.i
	@echo %include "Transports.h" | tee -a swig/libi2pd.i
	@echo %include "NTCPSession.h" | tee -a swig/libi2pd.i
	@echo %include "RouterInfo.h" | tee -a swig/libi2pd.i
	@echo %include "RouterContext.h" | tee -a swig/libi2pd.i
	@echo %include "Tunnel.h" | tee -a swig/libi2pd.i
	@echo %include "HTTP.h" | tee -a swig/libi2pd.i
	@echo %include "NetDb.hpp" | tee -a swig/libi2pd.i
	@echo %include "Garlic.h" | tee -a swig/libi2pd.i
	@echo %include "Streaming.h" | tee -a swig/libi2pd.i
	@echo %include "Destination.h" | tee -a swig/libi2pd.i
	@echo %include "Crypto.h" | tee -a swig/libi2pd.i
	@echo %include "Timestamp.h" | tee -a swig/libi2pd.i
	@echo %include "util.h" | tee -a swig/libi2pd.i
	@echo %include "Event.h" | tee -a swig/libi2pd.i
	@echo %include "Tunnel.h" | tee -a swig/libi2pd.i
	@echo %include "Transports.h" | tee -a swig/libi2pd.i
	@echo %include "NetDb.hpp" | tee -a swig/libi2pd.i
	@echo %include "HTTP.h" | tee -a swig/libi2pd.i
	@echo %include "LeaseSet.h" | tee -a swig/libi2pd.i
	@echo %include "Destination.h" | tee -a swig/libi2pd.i
	@echo %include "RouterContext.h" | tee -a swig/libi2pd.i
	@echo %include "version.h" | tee -a swig/libi2pd.i

get: clean
	wget -O i2pd.zip -c https://github.com/PurpleI2P/i2pd/archive/2.29.0.zip
	unzip -o i2pd.zip -d .i2pd
	mv .i2pd/* i2pd
	rm -rfv .i2pd

clean:
	rm i2pd.zip i2pd -rfv
