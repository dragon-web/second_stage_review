all : test test1 test3
test1 : test1.cpp 
	g++ $^ -o $@ -g -std=c++11
test : test.cpp
	g++ $^ -o $@ -g -std=c++11
test3 : test3.cpp
	g++ $^ -o $@ -g -std=c++11
./PHONY:
clean:
	rm -f test
