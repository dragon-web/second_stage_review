#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <malloc.h>
#include <unistd.h>


void sigcb(int number)
{
    perror("sekkrit stuff!"); 
    _exit(0);
}

void smash(char arr[3])
{
    const char *p1 = "To be a tree I am not the detach";
    strcpy(arr,p1);
    signal(11,sigcb);
}

void uncalled(char arr[2])
{
    strcpy(arr,"TEST");
    signal(11,sigcb);
}

int main()
{
    char arr[3] = {0};
    smash(arr);
    return 0;
}
