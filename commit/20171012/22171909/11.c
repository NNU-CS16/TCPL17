#include <stdio.h>
int main()
{
  int A,i,j,n=0;
printf("A=");
scanf("%d\n",&A);
  for (i=1;i<=4;i++)
  for (j=1;j<=6;j++,n++,A++)
  {
    if (n&&n%6==0)
    printf("\n");
    printf("%d\t",A*100+(A+1)*10+(A+2));
  }
  printf("\n");
  return 0;
}
