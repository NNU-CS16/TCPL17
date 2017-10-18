#include <stdio.h>
void main()
{
     int i,b,sum;
     b=1;
     sum=0;
     for(i=1;i<=10;i++);
{
     b*=i;
     sum+=b;
}
     printf("1!+2!+3!+...+10!=%d\n",sum);
     return 0;
}     
