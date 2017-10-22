#include<stdio.h>
int main()
{
char c;
int a;
float f1,f2;
scanf("%f %d %c %f",&f1,&a,&c,&f2);
printf("%c %d %0.2f %0.2f\n", c,a,f1,f2);
return 0;
}
