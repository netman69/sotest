all: library.so test

%.so: %.cc
	g++ -std=c++11 -fPIC -shared -fPIC -Wl,-soname,library.so $< -o $@

%: %.cc
	g++ -std=c++11 $< -fPIC -L. -lrary -o $@

clean:
	rm -f library.so test
