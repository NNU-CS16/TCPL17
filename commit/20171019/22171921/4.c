#include<stdio.h>
int main()
{
  int X,Y,N;
  scanf("%d",&N);
  int m;
  m=0;
  for(X=1;X<=100;X++)
  {
  for(Y=X;Y<=100;Y++)
  {
  if(X*X+Y*Y==N)
  {
  m=1;
  printf("%d %d\n",X,Y);
  }
  }
  }
  if(m==0)
  printf("No Solution\n");
  return 0;  
}
