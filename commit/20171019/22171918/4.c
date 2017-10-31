#include<stdio.h>
#include<math.h>
int main ()
{
  int i,j,N;
  int flag=0;
  scanf("%d",&N);
  for(i=1;i<sqrt(N);i++)
    for(j=i;j<sqrt(N);j++)
      if(i*i+j*j==N)
      {
        printf("%d %d\n",i,j);
        flag=1;
      }
      if(flag==0)
      { 
        printf("No Solution\n");
      }
   return 0;
}
