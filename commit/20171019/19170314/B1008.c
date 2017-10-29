#include<stdio.h>
int main(void)
{
   int n,m,i;
   scanf("%d%d",&n,&m);
   int a[101];
   for(i=0;i<n;i++)
   { 
    scanf("%d",&a[i]);
   }
   int t=0;
   for(i=n-m;i<n;i++)
   {
   printf("%d",a[i]);
   t++;
   if(t!=n) 
   printf(" ");
   }
   for(i=0;i<n-m;i++)
   {
   printf("%d",a[i]);
   t++;
   if(t!=n) 
   printf(" ");
   }
   return 0;
} 

