#include<stdio.h>
void fun(int i)
{
if(i==0)
return ;
fun(i/2);
printf("%d",i%2);
}
int main()
{
int i;
printf("i= ");
scanf("%d",&i);
fun(i);
printf("\nOctal=%o\n",i);
printf("Hexadecimal=%x\n",i);
return 0;
}

