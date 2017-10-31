#include<stdio.h>
int main()
{
int A,B,C;
printf("A,B,C:");
scanf("%d %d %d",&A,&B,&C);
if (A==B)
printf("C\n");
if (A==C)
printf("B\n");
if (B==C)
printf("A\n");
return 0;
}
