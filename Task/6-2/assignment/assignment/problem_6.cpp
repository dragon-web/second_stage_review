#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <malloc.h>
#include <unistd.h>
#include <iostream>

char p[] = "I love linux absdkabdkadbakjsdaksdhbasjsbasdnasndasnkasbdkask";  

void sigcb(int number)
{
    perror("sekkrit stuff!"); 
    _exit(0);
}

void smash(char arr[3])
{
    const char *p1 = "To be a tree";
    strcpy(arr,p1);
    signal(11,sigcb);
}

void uncalled()
{
    char *ptr="test";
    strcpy(ptr,"TEST");
    signal(11,sigcb);
}

int main()
{
    char arr[3] = {0};
    smash(arr);
    uncalled();

    return 0;
}
