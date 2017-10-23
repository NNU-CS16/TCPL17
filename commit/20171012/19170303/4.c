#include<stdio.h>
int main()
{
 int sum=0,i,a=1;
 for(i=1;i<=10;i++)
 { a*=i;
 sum+=a;}
 printf("1!+2!+3!+4!+5!+6!+7!+8!+9!+10!=%d\n",sum);
 return 0;
}
