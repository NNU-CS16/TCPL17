#include<stdio.h>
int main()
{
  int i=0,N,X,Y;
  scanf("%d",&N);
  for(X=1;X<N/2;X++)
     {
	  for(Y=X+1;Y<N/2;Y++)
          if(X*X+Y*Y==N)
		  {
			  printf("%d %d\n",X,Y);
			  i=i+1;
		  }
				        
     }
  if(i==0)
  printf("No Slution/n");
  return 0;
}
