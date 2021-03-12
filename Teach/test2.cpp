#include <iostream>

using namespace std;

int main()
{
    char *s1 = "I love China!";
    char *s2,c,*s3 = "w";
    s1 = s1+2;
    s2 = &c;
    *s2 = 'H';
    printf("%s\n%c\n%s\n",s1,*s2,s3);
    return 0;
}
