#include<stdio.h>
long long result(int n);
int main()
{
    int n;
    printf("Please in put the stageNum:\n");
    scanf("%d",&n);
    printf("result=%lld\n",result(n)%10007);
    return 0;
}

long long result(int n)
{   
    static long long Counter[1001]={0};
    if(0!=Counter[n])
        return Counter[n];
    if(n<=0)
        return 0;
    else if(1 == n)
        return 1;
    else if (2 == n)
        return 2;
    return result(n-1)+result(n-2);
}
