#include <stdio.h>
#include <math.h>
int main()
{
  int X,Y,N,m,f=0;
  scanf("%d",&N);
  m=sqrt(N/2.0);
  f=1;
  for(X=0;X<=m;X++)
  {
    for(Y=X;Y<=m;Y++)
   {
    Y=sqrt(N-X*X);
    if(X*X+Y*Y==N)
    {
      printf("%d%d",X,Y);
      f=1;
    }
   }  
  }
  if(f)
  printf("No Solution");
  return 0;
}
