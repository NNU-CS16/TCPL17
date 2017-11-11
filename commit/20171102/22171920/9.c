#include<stdio.h>
int is_int_pal(int n)
{
    int a,b=0;
    a=n;
    
    while(a)
    {
      b=b*10+a%10;
      a/=10;
    }
    if ( b==n )
       return 0;
    else 
       return -1;
}

int main()
{
    int n;
    scanf("输入一个整数：%d",&n);
    printf("%d\n",is_int_pal(n));
    return 0;
}
