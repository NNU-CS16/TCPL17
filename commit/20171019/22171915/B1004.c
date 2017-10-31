#include <stdio.h>
struct stuu
{
char name[11];
char num[11];
int score;
}stu,max,min;
int main()
{
int i,n;
max.score=0; min.score=101;
scanf("%d",&n);    
for (i=0;i<n;i++) 
{
scanf("%s%s%d",stu.name,stu.num,&stu.score);
if (stu.score>max.score) max=stu;
if (stu.score<min.score) min=stu;
}    
printf("%s %s\n",max.name,max.num);
printf("%s %s\n",min.name,min.num);
return 0;
}
