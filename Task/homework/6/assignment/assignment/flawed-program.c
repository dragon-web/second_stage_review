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

void smash(void)
{
    char str1[5] = "";
    strcpy(str1,p);
   // printf("mash");
    signal(11,sigcb);
}

void uncalled()
{
    char p[10] = "";
    const char* str1 = "Hello linux asbdashbxakjsxnaksja";
    sprintf(p,"%s",str1);
    signal(11,sigcb);
}
pointer getFuncPointer(char* sfuncname)
{
    if(strcmp(sfuncname,"smash")==0)
    {
        return &smash;
    }else if(strcmp(sfuncname,"uncalled")==0){
        return &uncalled;
    }
    return NULL;                                                                                                  
}

int main()
{
    char str[20];
    printf("please input func name:");
    scanf("%s",str);
    pointer point = NULL;
    point = getFuncPointer(str);
    if(point != NULL)
    {
        (*point)();
    }
    return 0;
}
