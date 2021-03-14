#include <stdio.h>
#include <string.h>
#define N 5
struct Stu
{
    char name[20];
    char number[18];
}Stu;

void Swap(struct Stu& peo1 , struct Stu& peo2)
{
    struct Stu temp;
    strcpy(temp.name, peo1.name);
    strcpy(temp.number, peo1.number);
    strcpy(peo1.name, peo2.name);
    strcpy(peo1.number, peo2.number);
    strcpy(peo2.name, temp.name);
    strcpy(peo2.number, temp.number);
}

int main() {
    struct Stu Peo[N];
    for(int i = 0;i < N;++i)
    {
        scanf("%s",Peo[i].name);
        getchar();
        scanf("%s",Peo[i].number);
        getchar();
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (strcmp(Peo[i].name, Peo[j].name) > 0) {
                Swap(Peo[i],Peo[j]);
            }
        }
    }
    printf("\n按照字典的顺序: \n");
    for (int i = 0; i < N; ++i) {
        fputs(Peo[i].name, stdout);
    }
    return 0;
}
