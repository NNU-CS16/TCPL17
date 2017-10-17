#include<stdio.h>
int main()
{
int sum=0;
int s;
for(s=1;s<=97;s=s+3)
sum=sum+s*(s+1)*(s+2);
printf("sum=%d\n",sum);
return 0;
}
