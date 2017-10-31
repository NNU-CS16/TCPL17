#include<stdio.h>
int main()
{
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  if(A==B&&C!=A)
  printf("C\n");
  if(B==C&&A!=B)
  printf("A\n");
  if(A==C&&B!=A)
  printf("B\n");
  return 0;
}
