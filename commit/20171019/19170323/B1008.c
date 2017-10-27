#include <stdio.h>
int main()
{
  int N,M;//1<=N<=100;M>=0;
  scanf("%d%d\n",&N,&M);
  int i,str[N];

  for(i=0;i<N;i++)
   {scanf("%d",&str[i]);}

  int j,k,temp;
  N=N+M;
  for(i=N-1;i>=M;i--)
   {
    str[i]=str[i-M];
   }

 for(j=N-M,k=0;j<N,k<M;j++,k++)
  {
    str[k]=str[j];
  }


  for(i=0;i<N-M;i++)
   printf("%d ",str[i]);
  
   printf("\n");
 
 return 0;
}
