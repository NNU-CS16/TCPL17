#include<stdio.h>
int is_pow2(int n); 
int main()
{

int n;
scanf("%d", &n);
if (is_pow2(n)==1)
printf("0\n");
else
printf("-1\n");
return 0;
}

int is_pow2(int n)
{
int i;
for(i=1;i<=n;i*=2)
   
{if(i==n)
return 1;}
return 0;
}
