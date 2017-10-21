#include <stdio.h>
int main()
{
  int a,i,j,k,n=0,m;
  scanf("%d",&a);

   for(i=a;i<=a+3;i++)
  {
    for(j=a;j<=a+3;j++)
    {
      for(k=a;k<=a+3;k++,n++)
     {if(i!=j&&i!=k&&j!=k)
       {
        if(n&&n%6==0)
        printf("\n");
         m=i*100+j*10+k;
         printf("%3d  ",m);
       }
     }
    }
   }
      printf("\n");
       return 0;
}
