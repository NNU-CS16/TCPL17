#include <stdio.h>
int main()
{
    int i,a,n,y,sum;
    y=0;
    i=0;
    sum=0;
    printf("a,n=");
    scanf("%d,%d",&a,&n);
    while(i<=(n-1))
    {
      y=y+a*pow(10,i);
      sum=sum+y;
      i=i+1;
    }
    printf("sum=%d\n",sum);
    return 0;
}
