#include<stdio.h>
#define num 20

typedef struct{
    char ming[num];
    char shu[num];
    int grade;
}stu;

int main()
{
     stu mem;
     stu max,min;
     max.grade=0;
     min.grade=100;
     int n;
     scanf("%d",&n);
     for (int i=0;i<n;i++)
        {
          scanf("%s %s %d",&mem.ming,&mem.shu,&mem.grade);
        if (mem.grade>=max.grade)
             max=mem;
        if (mem.grade<=min.grade)
             min=mem;
        }
  printf("%s %s\n%s %s",&max.ming,&max.shu,&min.ming,&min.shu);
      return 0;
}
