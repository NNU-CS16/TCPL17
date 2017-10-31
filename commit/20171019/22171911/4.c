#include<stdio.h>
#include<math.h>
int main( )
{
  int N,X,a=1;
  float Y;
  scanf("%d",&N);
  if(N<=0)
  printf("false");
  if(N>10000)
  printf("false");
  else
  for(X=1;X<=sqrt(N/2);X++)
  {
    Y=sqrt(N-X*X);
  if(Y==(int)Y)
 { printf("%d %.0f\n",X,Y);
  a++;
}
  }
  if(a=1)
  printf("No Solution");
  
  return 0;
}
