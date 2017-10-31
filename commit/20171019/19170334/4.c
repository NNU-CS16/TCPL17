#include <stdio.h>
#include <math.h>
int main()
{
  int X,Y,N;
  int s=0;
  scanf("%d",&N);
  for(X=1;X<100;X++)
  {
    for(Y=X;Y<100;Y++)
  {
    if(X*X+Y*Y==N)
    {
    printf("%d %d\n",X,Y);
    s=1;
    }
  }
  }
    if(s==0)
    {
      printf("No Solution");
    }
    return 0;
  }
