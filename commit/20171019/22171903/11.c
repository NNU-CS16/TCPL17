#include<stdio.h>
int main()
{
    int a[11][20],i,j;
    for(i=0;i<11;i++)
       for(j=0;j<20;j++)
          a[i][j]=0;
          for(i=0;i<10;i++)
          {
		for(j=0;i<=i;j++)
		{
                if(j<1)
		   a[i][j];
		else if(i==0)
                   break;
       		else
		   a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	   }
      for(i=0;i<10;i++)
      {
	  for(j=0;j<=i;j++)
	     printf("%d",a[i][j]);
             printf("\n");
      }
      return 0;
}
