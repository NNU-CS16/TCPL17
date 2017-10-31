#include <stdio.h>
int num[105];
int main()
{
int m, n, i, count=0;
scanf("%d%d",&n,&m);
m=n-m%n;
for(i=0;i<n;i++)
  {
   scanf("%d",&num[i]);
  }
for(i=m;i<n;i++)
  {
   printf("%d",num[i]);
   ++count;
   if(count!=0)
     {
      printf(" ");
     }
  }
for(i=0;i<m;i++)
  {
   printf("%d",num[i]);
   ++count;
   if(count!=n)
     {
      printf(" ");
     }
  }
return 0;
}



