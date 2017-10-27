#include<stdio.h>
#include<math.h>
int mod(int i,int j);
int main()
{
 int a,b,c,d,s;
 printf("please input a,b,c:\n");
 scanf("%d%d%d",&a,&b,&c);
 d=pow(a,b);
 s=mod(d,c);
 printf("%d\n",s);
 return 0;
}
 int mod(int i,int j)
{
 return i%j;
}
 
 
