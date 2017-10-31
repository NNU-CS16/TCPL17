#include <stdio.h>
struct stu
{
char name[11];
char num[11];
int s;
}
stu,max,min;
int main()
{
int i,n;
max.s=0; min.s=101;
scanf("%d",&n);
for (i=0;i<n;i++) 
{
scanf("%s%s%d",stu.name,stu.num,&stu.s);
if (stu.s>max.s) max=stu;
if (stu.s<min.s) min=stu;
}    
printf("%s %s\n",max.name,max.num);
printf("%s %s\n",min.name,min.num);
return 0;
}
