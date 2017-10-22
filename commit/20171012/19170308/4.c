#include <stdio.h>
 
int jiecheng(int i)
 
{
 
    int sum=1;
 
    for(int j=1;j<=i;j++)
 
    {
 
        sum*=j;
 
    }
 
    return sum;
 
}
 
int main()
 
{
 
    int i;
 
    long long sum=0;
 
    for(i=1;i<=10;i++)
 
    {
 
        sum+=jiecheng(i);
 
    }
 
    printf("%lld",sum);
 
    return 0;
 
}
