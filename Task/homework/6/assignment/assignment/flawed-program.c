#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <malloc.h>
#include <unistd.h>

typedef void(*pointer)();

char p[] = "I love linux absdkabdkadbakjsdaksdhbasjsbasdnasndasnkasbdkask";  

void sigcb(int number)
{
    printf("signal is %d\n",number);
    perror("sekkrit stuff!");
    _exit(0);
}

void smash(char arr[2])
{
    const char *p1 = "I am sorry";
    strcpy(arr,p1);
    signal(11,sigcb);
}

void uncalled()
{
    char p[10] = "";
    sprintf(p,"%s","Hello linux asbdashbxakjsxnaksja");
    signal(11,sigcb);
}

int main()
{
    char arr[2] = {0};
    smash(arr);

    return 0;
}
