
binding:
	cp swig/libi2pd.i i2pd/libi2pd/
	cd i2pd/libi2pd/ && swig -intgosize 32 -go libi2pd.i

get: clean
	wget -O i2pd.zip -c https://github.com/PurpleI2P/i2pd/archive/2.29.0.zip
	unzip -o i2pd.zip -d .i2pd
	mv .i2pd/* i2pd
	rm -rfv .i2pd

clean:
	rm i2pd.zip i2pd -rfv
