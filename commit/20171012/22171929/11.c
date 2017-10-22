#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i<n+4;i++)
    {
      for(j=n;j<n+4;j++)
      {
       for(k=n;k<n+4;k++)
       if(j!=i&&k!=j&&i!=k)
       printf("%d ",i*100+j*10+k);
      }
      printf("%c",8);
      printf("\n");
    }
return 0;
}
