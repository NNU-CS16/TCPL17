#include<stdio.h>
int main()
{
 int a,b,c,i,n,m;
 printf("please input a,b,c");
 scanf("%d,%d,%d",&a,&b,&c);
 m=a;
 for(i=1;i<b;i++)
  a=a*m;
  n=a%c;
 printf("mod is %d \n",n);
 return 0;
}
