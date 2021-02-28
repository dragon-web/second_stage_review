#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string s1(20,'a');
    string s2(s1);
    string s3(20,'A');
    string s4("sbnkabankjsa");
    s3 = s4;
    printf("%p\n",s1.c_str());
    printf("%p\n",s2.c_str());
    printf("%p\n",s3.c_str());
    printf("%p\n",s4.c_str());
    return 0;
}
