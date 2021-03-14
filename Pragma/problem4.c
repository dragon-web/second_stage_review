#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    FILE *out;
    out = fopen("abc.txt","a+");
    if(out == NULL){
     return 0;
    }
    const char* str = "this is a test";
    fprintf(out ,"%s",str);
    fclose(out);
    return 0;
}
