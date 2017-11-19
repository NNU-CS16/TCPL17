#include<stdio.h>
int five(int n);
int main()
{

int n;
scanf("%d", &n);
printf("%d", five(n));
return 0;
}
int five(int n)
{
if(n==1)
return 2;
else
return n=2*five(n-1)+2;
}
