#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int N;
  char cha;
  int sum=0;
  int rest=0;
  int i=0;
  scanf("%d%c",&N,&cha);
  while(sum<=N)
  {
    i++;
    sum=2*i*i-1;
  }
  rest=N-(i-1)*(i-1)*2+1;
  int n=i-1;
  for(int i=n;i>0;i--)
  {
    for(int j=0;j<n-1;j++)
    {
      printf(" ");
    }
    for(int j=0;j<2*i-1;j++)
    {
      printf("%c",cha);
    }
    printf("\n");
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-2-i;j++)
    {
      printf(" ");
    }
    for(int j=0;j<(i+2)*2-1;j++)
    {
      printf("%c",cha);
    }
    printf("\n");
  }
  printf("%d",rest);
  system("pause");
  return 0;
}





