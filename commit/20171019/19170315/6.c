#include <stdio.h>
int main()
{
  int A, B, C;
  printf("Enter three positive integers: ");
  scanf("%d %d %d",&A,&B,&C);
  
  if(A==B && A!=C)
    printf("C");
  if(A==C && A!=B)
    printf("B");
  if(B==C && B!=A)
    printf("A");
    
  printf("\n");
  return 0;
}
