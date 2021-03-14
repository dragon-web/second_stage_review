#include <stdio.h>
#include <string.h>
#define N 5
struct Stu
{
    char name[20];
    char number[18];
    int grade1;
    int grade2;
    int grade3;
}Stu;

int main() {
    struct Stu Peo[N];
    for(int i = 0;i < N;++i)
    {
        scanf("%s",Peo[i].name);
        getchar();
        scanf("%s",Peo[i].number);
        getchar();
        scanf("%d",&Peo[i].grade1);
        scanf("%d",&Peo[i].grade2);
        scanf("%d",&Peo[i].grade3);
    }
    struct Stu temp = Peo[0];
    int temp_avg = (Peo[0].grade1 + Peo[0].grade2 + Peo[0].grade3 ) / 3;
    for (int i = 0; i < N; ++i) {
    int avg = (Peo[i].grade1 + Peo[i].grade2 + Peo[i].grade3 ) / 3;
        printf("平均成绩 %d",avg);
        if(avg > temp_avg)
        {
            temp.grade1 = Peo[i].grade1; 
            temp.grade2 = Peo[i].grade2; 
            temp.grade3 = Peo[i].grade3; 
            strcpy(temp.name,Peo[i].name);
            strcpy(temp.number,Peo[i].number);
            temp_avg = avg;
        }
    }
    printf("最高分学生姓名：%s",temp.name);
    printf("最高分学生学号：%s",temp.number);
    printf("最高分学生成绩1：%d",temp.grade1);
    printf("最高分学生成绩2：%d",temp.grade2);
    printf("最高分学生成绩3：%d",temp.grade3);
    printf("最高分学生平均成绩：%d",temp_avg);
    return 0;
}
