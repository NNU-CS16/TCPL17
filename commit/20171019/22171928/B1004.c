#include<stdio.h>
struct homeworkl
{
char name[11];
char num[11];
int mark;
}
stu[110];

int main()
{
  int n,i,min=0x3fffffff,max=-1,mini,maxi;
  scanf("%d",&n);
    for(i=0;i<n;i++)
{
scanf("%s %s %d",&stu[i].name,&stu[i].num,&stu[i].mark);
	 if(stu[i].mark<min)
{
min=stu[i].mark;
mini=i;
}
if(stu[i].mark>max)
{
max=stu[i].mark;
maxi=i;
}
}
printf("%s %s\n",stu[maxi].name,stu[maxi].num);
printf("%s %s",stu[mini].name,stu[mini].num);
 return 0;
}
