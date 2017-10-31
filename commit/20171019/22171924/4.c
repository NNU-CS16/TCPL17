#include<stdio.h>
#include<math.h>
int main()
{
  int x,y,N;
  int flag=0;
  scanf("%d",&N);
  for(x=1;x<sqrt(N);x++)
    for(y=x;y<sqrt(N);y++)
      if(x*x+y*y==N)
      {
        printf("%d %d\n",x,y);
        flag=1;
      }
      if(flag==0)
      { 
        printf("No Solution\n");
      }
   return 0;
}
