/*求是否为素数的优化*/
#include<stdio.h>
#include<math.h>
int prime (int);
int main()
{
int r;
printf("请输入0～999的一个整数:");
scanf("%d" ,&r);
if (prime(r))
    printf("%d是素数\n",r);
else
    printf("%d是合数\n",r);
 
 return 0;
 }

int prime(int n)
{
int m;
for (m=2;m<=sqrt(n);m++)
{
if(n%m==0)
    return 0;
}
return 1;
}


