#include<stdio.h>
int main()
{
   int n,a[20][20],x,y;
   printf("n<=20\n");
   scanf("%d",&n);
   for(x=0;x<n;x++)
{
   a[x][0]=1;
   if(x==0)
   printf("%d\n",1);

}

   for(x=1;x<n;x++)

   for(y=0;y<x+1;y++)
{
   if(y==0)
   printf("%d",1);
   if(x!=y&&y!=0)
  {
   a[x][y]=a[x-1][y-1]+a[x-1][y];
   printf(" %d",a[x][y]);
   }
   if(x==y)
{
   a[x][y]=1;
   printf(" %d\n",1);
}
}
   printf("\n");
   return 0;
}
   
