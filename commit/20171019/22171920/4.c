#include <stdio.h>  
int main ()  
{  
  int a=0,X,Y,N;
  printf("input a number:");
  scanf("%d",&N);
    
  for(X=1;X<=100;X++)  
  {  
  for(Y=X;Y<=100;Y++)  
    {  
    if(X*X+Y*Y==N)  
      {  
       a=1;  
       printf("%d %d\n",X,Y);  
      }  
    }  
  }  
      if(a==0) 
      {
      printf("No Solution \n");  
      } 
    return 0;  
}  
