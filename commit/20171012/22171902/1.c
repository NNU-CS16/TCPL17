#include<stdio.h>
int main()
{
     long   int sum,n;
        sum=0;
        for(n=2;n<=100;n+=2)
    {
        sum+=n;
    }
  printf("the value of '2+4+6+...+100'is %d\n",sum);
        return 0;
}

