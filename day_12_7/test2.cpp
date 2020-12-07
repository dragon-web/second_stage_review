#include <iostream>
#include <string>

using namespace std;

class myClass{


    ~myClass();

};

myClass::~myClass(){
    delete this;
    this = NULL;

}
