#include<stdio.h>
int main()
{
   int a[1000];
   int n,m,i;
   
   scanf("%d %d",&n,&m);
   m%=n;
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
       a[n+i]=a[i]; 
  
   for(i=n-m;i<=2*n-m-2;i++)
       
       printf("%d ",a[i]);
       printf("%d",a[2*n-m-1]);
       printf("\n");
   return 0;
}
       
