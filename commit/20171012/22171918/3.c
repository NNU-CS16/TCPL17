#include <stdio.h>
int main()
{
    int a,n,x,y,i;
    i=0;
    scanf("%d%d",&a,&n);
    a=2;
    n=5;
    x=a;
    for(y=0;y<n;y++)
    {
      i+=x;
      x=x*10+a;
    }
    printf("%d\n",i);
    return 0;
}

