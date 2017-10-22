#include<stdio.h>
int main()
{
int sum,n,i;
sum=0;
i=1;
n=1;
do
{
i=i*n;
sum=sum+i;
n++;
}while(n<=10);
printf("1!+2!+...+10!=%d\n",sum);
return 0;
} 
