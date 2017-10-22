#include<stdio.h>
int main()
{
int number;
printf("number= ");
scanf("%d",&number);
int i;
i=number/16*10+(number%16);
printf("%d\n",i);
return 0;
}
