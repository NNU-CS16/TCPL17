#include <stdio.h>
int main()
{
  int x,y,N;
  printf("please input N(N<=10000): ");
  scanf("%d",&N);
  int m;
   for (x=1;x<=100;x++)
     for (y=x;y<=100;y++)
      {
        m=x*x+y*y;
        if(m==N)
       { printf("%d %d",x,y);
        
        printf("\n");
        }    
       }  
   return 0;
}
       
