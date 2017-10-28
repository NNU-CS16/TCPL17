#include<stdio.h>
int jie(int n);
int cnk(int n,int k);

int main()
{
  int n,i,j,k;

  printf("please input hangshu:");

  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
       printf(" ");

     for(k=1;k<=i;k++)
       printf("%3d  ",cnk(i-1,k-1));

     printf("\n");
  }
}

  int cnk(int n,int k)

{
   int m;

   m=jie(n)/(jie(k)*jie(n-k));

   return m;
}

   int jie(int n)
{

   int i,m=1;

   for(i=1;i<=n;i++)

   {
      m=m*i;
   }

   return m;

}
