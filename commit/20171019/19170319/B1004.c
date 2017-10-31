#include<stdio.h>
#include<string.h>
int main()
{
 char name[11],no[11];
 char maxname[11],maxno[11],minname[11],minno[11];
 int a[10000];
 int n,i,j,z1=0,z2=100;
 scanf("%d",&n);
 for(i=0;i<=n-1;++i)
 {
  scanf("%s %s %d",name,no,&a[i]);
  if(a[i]>=z1)
   {
     z1=a[i];
     strcpy(maxname,name);
     strcpy(maxno,no);
   }
  if(a[i]<=z2)
   {
     z2=a[i];
     strcpy(minname,name);
     strcpy(minno,no);
   }
 }
 printf("%s %s %d\n",maxname,maxno,z1);
 printf("%s %s %d\n",minname,minno,z2);
 return 0;
}
