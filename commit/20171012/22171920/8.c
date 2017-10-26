#include<stdio.h>
int main()
{
   int m,n;
    printf("please input a number:");
    scanf("%d",&m);
    n=m%16+m/16*10;
    printf("the answer is:%d\n",n);
    
     return 0;
}
