#include<stdio.h>
int is_int_pal(int n)
{
    int t=0,m=n;
    while(m)
    {
       t=t*10;
       t=t+m%10;
       m=m/10;
    }
    if (t==n)
       return 0;
    else 
       return -1;
}
 
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",is_int_pal(n));
    return 0;
}
