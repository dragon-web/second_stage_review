#include <stdio.h>
#include <string.h>

typedef void (*funcP)();
void func1()
{
    printf("this is func1!\n");

}
void func2()
{
    printf("this is func2!\n");

}
funcP getFuncPointer(char* sfuncname)
{
    if(strcmp(sfuncname,"func1")==0)
    {
        return &func1;

    }else if(strcmp(sfuncname,"func2")==0){
        return &func2;

    }
    return NULL;                                                                                                  

}

int main()
{
    char c[20] = "\0";
    funcP funcp = NULL;
    printf("please input func name:");
    scanf("%s",c);  //input func1 or func2
    funcp = getFuncPointer(c); 
    if(funcp!=NULL)
    {
        (*funcp)();
    }

}
