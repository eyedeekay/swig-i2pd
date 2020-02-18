
export CGO_ENABLED=yes
CGO_ENABLED=yes
VERSION=2.29.0


binding: get interface libi2pd libi2pd_client

libi2pd:
	cp swig/libi2pd.i i2pd/libi2pd/
	cd i2pd/libi2pd/ && swig -gccgo -intgosize 32 -go libi2pd.i
	go build i2pd/libi2pd/i2pd.go

libi2pd_client:
	cp swig/libi2pd_client.i i2pd/libi2pd_client/
	cd i2pd/libi2pd_client/ && swig -gccgo -intgosize 32 -go libi2pd_client.i
	go build i2pd/libi2pd_client/i2pdclient.go

interface: libi2pdinterface libi2pd_clientinterface

libi2pdinterface:
	@echo '%module i2pd' | tee swig/libi2pd.i
	@echo '%{' | tee -a swig/libi2pd.i
	@echo '/* Includes the header in the wrapper code */' | tee -a swig/libi2pd.i
	./generate include1 | tee -a swig/libi2pd.i
	@echo '%}' | tee -a swig/libi2pd.i
	@echo '' | tee -a swig/libi2pd.i
	@echo '/* Parse the header file to generate wrappers */' | tee -a swig/libi2pd.i
	./generate include2 | tee -a swig/libi2pd.i
	sed -i 's|%include "Log.h"||g' swig/libi2pd.i
	sed -i 's|%include "LittleBigEndian.h"||g' swig/libi2pd.i

libi2pd_clientinterface:
	@echo '%module i2pdclient' | tee swig/libi2pd_client.i
	@echo '%{' | tee -a swig/libi2pd_client.i
	@echo '/* Includes the header in the wrapper code */' | tee -a swig/libi2pd_client.i
	@echo '#include "AddressBook.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "BOB.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "ClientContext.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "HTTPProxy.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "I2CP.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "I2PService.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "I2PTunnel.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "MatchedDestination.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "SAM.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "SOCKS.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "Websocket.h"' | tee -a swig/libi2pd_client.i
	@echo '#include "WebSocks.h"' | tee -a swig/libi2pd_client.i
	@echo '%}' | tee -a swig/libi2pd_client.i
	@echo '' | tee -a swig/libi2pd_client.i
	@echo '/* Parse the header file to generate wrappers */' | tee -a swig/libi2pd_client.i
	@echo '%include "AddressBook.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "BOB.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "ClientContext.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "HTTPProxy.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "I2CP.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "I2PService.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "I2PTunnel.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "MatchedDestination.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "SAM.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "SOCKS.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "Websocket.h"' | tee -a swig/libi2pd_client.i
	@echo '%include "WebSocks.h"' | tee -a swig/libi2pd_client.i

get: clean
	wget -O i2pd.zip -c https://github.com/PurpleI2P/i2pd/archive/$(VERSION).zip
	unzip -o i2pd.zip -d .i2pd
	mv .i2pd/* i2pd
	rm -rfv .i2pd

clean:
	rm i2pd.zip i2pd -rfv
