#include <stdio.h>

#define N 3
struct Stu
{
    char name[20];
    char number[18];
}Stu;

void Swap(struct Stu* Peo1 , struct Stu* peo2)
{

}
int main()
{
    struct Stu Peo[N];
    for(int i = 0;i < N;++i)
    {
    scanf("%s",Peo[i].name);
    getchar();
    scanf("%s",Peo[i].number);
    }


}
