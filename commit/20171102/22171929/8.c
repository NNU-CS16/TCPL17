#include <stdio.h>
int LCM(int m, int n);
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   LCM(a,b);
   return 0;
}
int LCM(int m, int n)
{
    int z,y,x,r,temp;
    y=n;
    z=m;
    if(n<m)
    {
    temp=n;
    n=m;
    m=temp;
    }
    while(m!=0)
    {
    r=n%m;
    n=m;
    m=r;
    }
    if(n==1)
   {
     x=y*z;
    printf("%d",x);
    }
    if(n!=1)
    {
     x=(y*z)/n;
    printf("%d",x);
    } 
    return 0;
    }
