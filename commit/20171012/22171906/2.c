#include<stdio.h>
int main()
{
int sum,n;
sum=0;
for (n=1;n<=97;n+=3)
sum+=n*(n+1)*(n+2);
printf("%d/n",sum);
return 0;
}
