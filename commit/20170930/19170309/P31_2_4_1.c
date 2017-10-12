#include<stdio.h>
int main()
{

int x,y,x1,x2,x3,x4;

printf("Please int a number: ");
scanf("%d", &x);
x1= x*x*x;
x2= 2*x*x;
x3= 3*x;
x4= x1+x2+x3;
y= x4+1;
printf("The output is: %d\n",y);
return 0;
}

