
SWIG?=`which swig || echo swig4.0`

binding: swig-libi2pd swig-libi2pd_client

#install:

SWIG_OPTS= -v -MD -macroerrors -Wall -Werror -copyctor -cgo -c++ -intgosize 64 -go

swig-libi2pd:
	@echo $(SWIG)
	rm -rf ../i2pd/libi2pd/libi2pd_wrap.cxx ../i2pd/libi2pd/libi2pd.go ../i2pd/libi2pd/binding.go
	cd ../i2pd/libi2pd/ && $(SWIG) $(SWIG_OPTS) libi2pd.i

swig-libi2pd_client:
	@echo $(SWIG)
	cd ../i2pd/libi2pd_client/ && $(SWIG) $(SWIG_OPTS) libi2pd_client.i
