#include<stdio.h>
int main( )
{
 int N,b,a,c;
 scanf("%d",&N);
if(N<13)
{
for(a=1;a<=N;a++)
{
for(b=1;b<=N-a;b++)
printf(" ");
for(c=1;c<=2*a-1;c++)
printf("*");
printf("\n");
}
for(a=N-1;a>=1;a--)
{
for(b=1;b<=N-a;b++)
printf(" ");
for(c=1;c<=2*a-1;c++)
printf("*");
printf("\n");
}
}
else
printf("false");


return 0;
}
 
