#include<stdio.h>
int main()
{
int a1=3,b1;
int a2=3,b2;
b1=a1++;
b2=++a2;
printf("b1=a1++,%d,%d\n",a1,b1);
printf("b2=++a2,%d,%d\n",a2,b2);
return 0;
}
