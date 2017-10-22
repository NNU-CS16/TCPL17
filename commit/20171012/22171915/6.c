#include<stdio.h>
int main()
{
int N,i,a,b,c,d;
printf("N:");
scanf("%d",&N);
for (i=1;i<=N;i++)
{
for (a=1;a<=N-i;a++)
printf(" ");
for (b=1;b<=2*i-1;b++)
printf("*");
printf("\n");
}
for (i=1;i<=N-1;i++)
{
for (c=1;c<=i;c++)
printf(" ");
for (d=1;d<=(2*N-1)-2*i;d++)
printf("*");
printf("\n");
}
return 0;
}
