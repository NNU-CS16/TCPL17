#include<stdio.h>
int main()
{
 int l,a,y;
 for(l=2,a=1,y=1;l<=10;l++)
{
 a*=l;
 y+=a;
}
 printf("1!+2!+3!+...+10!=%d\n",y);

 return 0;
}
