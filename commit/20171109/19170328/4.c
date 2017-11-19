#include<stdio.h>
long long result(int n);
int main()
{
    int n;
    printf("Please in put the stageNum:\n");
    scanf("%d",&n);
    printf("result=%lld\n",result(n)%100007);
    return 0;
}

long long result(int n)
{
   if(n<=0)
        return 0;
    else if(1 == n)
        return 1;
    else if (2 == n)
        return 2;
    return 2*result(n-1);
}
