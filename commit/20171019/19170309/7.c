#include<stdio.h>
int main()
{

int i,j,k,n,f,e;
scanf("%d", &n);
for(e=1,f=1;f<n;e++)
   f=2*e+f;
for(i=e-2;i>=1;i--)
{
for(j=i;j<=20-1;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}

for(i=1;i<=e-2;i++)
{
for(j=1;j<=20-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
return 0;
}

