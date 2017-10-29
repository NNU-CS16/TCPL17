#include <stdio.h>
int get(long int A,int B)
{
    int t=0;
    while (A>0)
    {
       if (A%10==B) t++;
       A/=10;
    }
    return t;
}

int main()
{
   long int i,a,b,P1=0,P2=0;
   long int n,m;
    
    scanf("%ld%ld%ld%ld",&a,&n,&b,&m);
    for (i=1;i<=get(a,n);i++)
      P1=P1*10+n;
    for (i=1;i<=get(b,m);i++)
      P2=P2*10+m;
    printf("%ld\n",P1+P2);
  
    return 0;
  
}
