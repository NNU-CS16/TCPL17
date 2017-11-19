#include<stdio.h>
int tai(int n);
int main()
{

int n;
scanf("%d", &n);
printf("%d\n", tai(n));
return 0;
}
int tai(int n)
{

if(n==1)
return 1;
else if(n==2)
return 2;
else if(n>2)
return n=tai(n-1)+tai(n-2);
}


