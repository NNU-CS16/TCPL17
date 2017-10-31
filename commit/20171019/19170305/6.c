#include<stdio.h>
int main()
{
   int A,B,C;
   scanf("%d %d %d",&A,&B,&C);
   if(A==B&&A!=C)
      printf("C\n");
   else if(A==C&&A!=B)
      printf("B\n");
   else if(B==C&&B!=A)
      printf("A\n");
   else
      printf("Please input right A,B,C\n");
return 0;
}   
