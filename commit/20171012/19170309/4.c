#include<stdio.h>
int main()
{

int n,i,s,t;
    s=1,t=1;
scanf("%d", &n);
for (i=2;i<=n;i++)
{
s=s*i;
 t=s+t;
}

printf("The result is:%d\n", t);
return 0;
}
