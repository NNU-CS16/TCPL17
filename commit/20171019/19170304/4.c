#include<stdio.h>
#include<math.h>

int main()
{
  int X,Y,N,i;
  int f=0;
  scanf("%d",&N);
  i=sqrt(N);
  for(X=1;X<=i;X++)
  for(Y=1;Y<=i;Y++)
  {
     if(X*X+Y*Y==N) 
     {printf("%d %d\n",X,Y);
     f=1;}
  }  
  if(f=0) printf("No Solution\n") ;
  
  return 0;
     
}
