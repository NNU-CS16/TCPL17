#include<stdio.h>
#include<stdio.h>
int main()
{
  int a,i,j,k,n=0;
  scanf("%d",&a);
    for(i=a;i<=a+3;i++)
    {
      for(j=a;j<=a+3;j++)
      {
         for(k=a;k<=a+3;k++)
         {
          if(i!=j && i!=k && j!=k)
          {
            printf("%d%d%d",i,j,k);
             n++;
             if(n%6==0)
               printf("\n");
             else printf(" ");
          }
         }
      }
    }
  return 0;
}
