#include<stdio.h>                             
int fun(int n);//想用递归
int fac_bit_count(int n);
int main()
{
int n;
scanf("%d",&n);
    printf("%d",fac_bit_count(fun(n)));
return 0;
}

int fun(int n)
{

    if(n==1)//主函数的n
        return 1;
    else
        return n*fun(n-1);
}


int fac_bit_count(int n)
{
    int count=0;
while(n)
{
n/=10;
count++;
}
return count;
 }



