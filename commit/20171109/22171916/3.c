#include<stdio.h>
int taijie(int n,int a,int b);
int main()
{
 int n;
 scanf("%d",&n);
 printf("%d\n",taijie(n,1,2));
 return 0;
}
int taijie(int n,int a,int b)
{
  if(n==1||n==0)
    return a;
  if(n==2)
    return b;
  return taijie(n-1,b%100007,(a+b)%100007);
}
