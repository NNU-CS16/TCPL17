/*成绩排名*/
#include<stdio.h>
struct Student
{
  char name[15];
  char num[15];
  int grade;
}
temp,max,min;

int main()
{
  int n;
  max.grade=-1;
  min.grade=101;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%s%s%d",temp.name,temp.num,&temp.grade);
    if(temp.grade>max.grade)  max=temp;
    if(temp.grade<min.grade)  min=temp;
  }
  printf("%s %s\n",max.name,max.num);
  printf("%s %s\n",min.name,min.num);
  return 0;
}
