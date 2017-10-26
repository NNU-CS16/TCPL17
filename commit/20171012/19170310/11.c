#include<stdio.h>
int main()
{
  int n,i,j,k,x=1;
  scanf("%d",&n);
  for(k=0;k<=3;++k)
 {	
  for(i=0;i<=3;++i)
   {	
    if(i!=k)
     {			
      for(j=0;j<=3;++j)
      {			
       if(j!=i&&j!=k)
	{
	if((x%6==0))
	printf("%d%d%d\n",n+k,n+i,n+j);			
        else
	printf("%d%d%d ",n+k,n+i,n+j);
	++x;								
	}
       }
      }
     }
  }

return 0;
}
