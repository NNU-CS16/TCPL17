#include<stdio.h>
int A(int);

int main()
{
int n;
scanf("%d",&n);
if(n<1||n>25)
printf("Wrong!\n");
else
printf("%d\n",A(n));
return 0;
}

int A(int n)
{
if(n==1)
return 2;
else
return 2*A(n-1)+2;
}
