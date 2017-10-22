#include <stdio.h>
int main()
{
int sum=0;
int i=1;
do
 {
 sum=sum+2*i;
 i++;
 }
while(i<=50);
 printf("2+4+6+...+100=%d\n",sum);
return 0;
}
