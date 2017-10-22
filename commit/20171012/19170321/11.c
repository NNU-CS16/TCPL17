#include<stdio.h>
int main()
{
  int A,i,j,k,count=0;
  scanf("%d",&A);
  for(i=A;i<=A+3;i++)
  {
    for(j=A;j<=A+3;j++)
    {
      for(k=A;k<=A+3;k++)
      if(j!=k&&k!=i&&i!=j)
      {
        count++;
        if(count%6==0)
           printf("%d\n",i*100+j*10+k);
        else
           printf("%d ",i*100+j*10+k);
        
      }
      
    }
    
  
  }
  
  return 0;
}
