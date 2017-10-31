#include<stdio.h>
struct student
{
 char name[11];
 char num[11];
 int s;
};
int main()
{
 struct student a[100],max,min;
 int i,n;
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
  scanf("%s%s%d",a[i].name,a[i].num,&a[i].s);
  max.s=a[0].s;min.s=a[0].s;
 for(i=0;i<=n-1;i++)
  if(a[i].s>=max.s){max=a[i];}
 for(i=0;i<=n-1;i++)
  if(a[i].s<=min.s){min=a[i];}
 printf("%s %s\n",max.name,max.num);
 printf("%s %s\n",min.name,min.num);
 return 0;
}
