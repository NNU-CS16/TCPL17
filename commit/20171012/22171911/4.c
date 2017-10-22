#include<stdio.h>
int main( )
{
int i,p,s;
for(p=1,s=1,i=2;i<=10;i++)
{
p*=i;
s+=p;
}
printf("1!+2!+...+10!=%d\n",s);
return 0;
}

