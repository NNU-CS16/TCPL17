#include<stdio.h>
int LCM(int m,int n)
{
 int i;
 if(m>n){i=m;}else{i=n;}
 for(;i<=m*n;i++)
 {
  if(i%m==0&&i%n==0)
  break;
 }
 return i;
}
int main()
{
 int m,n;
 scanf("%d%d",&m,&n);
 printf("%d\n",LCM(m,n));
 return 0;
}
  
