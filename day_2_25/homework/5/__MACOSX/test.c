#include <stdio.h>
#include <string.h>

const char *str1 = "Hello";

int main()
{
    char str2[20] = "World"; 
    printf("First: %s %s\n",str1,str2);
    char *after = strcat(str2, str1);
    printf("Second: %s\n",after);
    char *last = strncat(str2,str1,3);
    printf("Last: %s \n",last);
    return 0;
}
