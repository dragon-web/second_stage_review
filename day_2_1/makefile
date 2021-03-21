all:test3 test2
test3 : test3.cpp
	g++ $^ -o $@ -g -std=c++11
test2 : test2.cpp 
	g++ $^ -o $@ -g -std=c++11
./PHONY:
clean:
	rm -f test2
