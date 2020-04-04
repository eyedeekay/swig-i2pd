
#export CGO_ENABLED=yes
#CGO_ENABLED=yes
VERSION=2.29.0

SWIG?=`which swig || echo swig4.0`


#GO_OPTS=-compiler gccgo

binding: libi2pd libi2pd_client

#install:

libi2pd:
	cp swig/libi2pd.i i2pd/libi2pd/libi2pd.swigcxx
	rm -rf i2pd/libi2pd/libi2pd_wrap.cxx i2pd/libi2pd/libi2pd.go i2pd/libi2pd/binding.go
	cd i2pd/libi2pd/ && $(SWIG) -v -MD -macroerrors -Wall -Werror -copyctor -cgo -c++ -intgosize 64 -go libi2pd.swigcxx
	cd i2pd/libi2pd/ && \
	go install $(GO_OPTS) . #/i2pd/libi2pd/

libi2pd_client:
	cp swig/libi2pd_client.i i2pd/libi2pd_client/libi2pd_client.swigcxx
	cd i2pd/libi2pd_client/ && $(SWIG) -v -MD -macroerrors -Wall -Werror -copyctor -cgo -c++ -intgosize 64 -go libi2pd_client.swigcxx
	cd i2pd/libi2pd_client && \
	go install $(GO_OPTS) . #./i2pd/libi2pd_client/

interface: libi2pdinterface libi2pd_clientinterface

libi2pdinterface:
	#@echo '%module libi2pd' | tee swig/libi2pd.i
	#@echo '%{' | tee -a swig/libi2pd.i
	#@echo '/* Includes the header in the wrapper code */' | tee -a swig/libi2pd.i
	#./generate include1 | tee -a swig/libi2pd.i
	#@echo '%}' | tee -a swig/libi2pd.i
	#@echo '' | tee -a swig/libi2pd.i
	#@echo '/* Parse the header file to generate wrappers */' | tee -a swig/libi2pd.i
	#./generate include2 | tee -a swig/libi2pd.i
	#sed -i 's|%include "Log.h"||g' swig/libi2pd.i
	#sed -i 's|%include "LittleBigEndian.h"||g' swig/libi2pd.i
	#sed -i 's|%include "Queue.h"||g' swig/libi2pd.i
	#sed -i 's|%include "Tag.h"||g' swig/libi2pd.i
	#sed -i 's|%include "Garlic.h"||g' swig/libi2pd.i
	#sed -i 's|%include "util.h"||g' swig/libi2pd.i
	#@echo 'package libi2pd' | tee i2pd/libi2pd/binding.go
	#@echo 'import "C"' | tee -a i2pd/libi2pd/binding.go

libi2pd_clientinterface:
	#@echo '%module libi2pd_client' | tee swig/libi2pd_client.i
	#@echo '%{' | tee -a swig/libi2pd_client.i
	#@echo '/* Includes the header in the wrapper code */' | tee -a swig/libi2pd_client.i
	#@echo '#include "AddressBook.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "BOB.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "ClientContext.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "HTTPProxy.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "I2CP.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "I2PService.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "I2PTunnel.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "MatchedDestination.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "SAM.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "SOCKS.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "Websocket.h"' | tee -a swig/libi2pd_client.i
	#@echo '#include "WebSocks.h"' | tee -a swig/libi2pd_client.i
	#@echo '%}' | tee -a swig/libi2pd_client.i
	#@echo '' | tee -a swig/libi2pd_client.i
	#@echo '/* Parse the header file to generate wrappers */' | tee -a swig/libi2pd_client.i
	#@echo '%include "AddressBook.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "BOB.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "ClientContext.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "HTTPProxy.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "I2CP.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "I2PService.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "I2PTunnel.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "MatchedDestination.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "SAM.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "SOCKS.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "Websocket.h"' | tee -a swig/libi2pd_client.i
	#@echo '%include "WebSocks.h"' | tee -a swig/libi2pd_client.i
	#@echo 'package libi2pd_client' | tee i2pd/libi2pd_client/binding.go
	#@echo 'import "C"' | tee -a i2pd/libi2pd_client/binding.go

get: clean
	wget -O i2pd.zip -c https://github.com/PurpleI2P/i2pd/archive/$(VERSION).zip
	unzip -o i2pd.zip -d .i2pd
	mv .i2pd/* i2pd
	rm -rfv .i2pd

clean:
	rm i2pd.zip i2pd -rfv
