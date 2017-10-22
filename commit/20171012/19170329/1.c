#include<stdio.h>
int main()
{
    int i=2,sum;
    do    
{ 
    sum=sum+i;
    i+=2; 
}
    while(i<101);
    printf("sum=%d\n",sum);
    return 0;
}
