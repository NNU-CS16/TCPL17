#include<stdio.h>
int main()
{
    int sum=0,n=1,a=1;
    while(n<=10)
     {a=a*n;
      sum=sum+a;
      n++;
     }
    printf("%d\n",sum);
    return 0;
}
