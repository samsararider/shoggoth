windows:
	echo "Cross compiling Shoggoth for Windows"

	rm -rf ./target/openssl

	unzip -o -q ./lib/openssl-1.1.1.zip -d ./target/
	cd ./target/openssl/ && perl ./Configure mingw64 --cross-compile-prefix=x86_64-w64-mingw32-
	
	- cd ./target/openssl/ && make


	CC=x86_64-w64-mingw32-gcc make