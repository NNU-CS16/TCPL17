#include <stdio.h>
#include <math.h>

int main()
{
  int X,N,r;
  float Y;
  scanf("%d",&N);
  for(r=0,X=1;X<=sqrt(N/2);X++)
  {
     Y=sqrt(N-X*X);
    if(Y-(int)Y<=1e-6)
    {
      printf("%d %.0f\n",X,Y);
      r=r+1;
    }
  }
  if(r==0)
    printf("No Solution\n");

  return 0;
}
