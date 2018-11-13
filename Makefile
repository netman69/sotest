all: library.so test

%.so: %.cc
	g++ -O4 -std=c++11 -shared -fPIC -Wl,-soname,library.so $< -o $@

%: %.cc
	g++ -O4 -std=c++11 $< -L. -lrary -o $@

clean:
	rm -f library.so test
