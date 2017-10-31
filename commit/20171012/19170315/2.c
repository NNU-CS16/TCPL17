#include <stdio.h>

int main()
{
 int sum=0,a=1,b=2,c=3;
 while (a<=97)
 {
    sum=sum+a*b*c;
    a=a+3,b=b+3,c=c+3;
 }

printf("sum=%d\n",sum);

return 0;
}

