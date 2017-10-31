#include<stdio.h>
int main()
{
  int A, B, C;
  scanf("%d %d %d",&A,&B,&C);
  if(A == B)
   printf("%c\n",'C');
  else
   {
     if(A == C)
      printf("%c\n",'B');
      else
       printf("%c\n",'A');
   }
   return 0;
   
}
