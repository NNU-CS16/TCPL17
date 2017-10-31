#include <stdio.h>
int num(long int x,int y)
{
    int z=0;
    while (x>0)
    {
       if (x%10==y) z++; x/=10;
    }
    return z;
}
int main()
{   
    long int i,a,b,za=0,zb=0;
    int da,db;   
    scanf("%ld%d%ld%d",&a,&da,&b,&db);
    for (i=1;i<=num(a,da);i++)
      za=za*10+da;
    for (i=1;i<=num(b,db);i++)
      zb=zb*10+db;
    printf("%ld\n",za+zb);
    return 0;
  
}
