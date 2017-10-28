#include<stdio.h>

int main()
{
  int m,n,i=0,a[100];

  printf("please input n,m:");

  scanf("%d%d",&n,&m);

  while(i<n)
  {
     if(i+m%n<n)

       scanf("%d",&a[i+m%n]);

     else
        scanf("%d",&a[i+m%n-n]);
    i++;

  }

   printf("%d",a[0]);

   for(i=1;i<n;i++)

      printf(" %d",a[i]);

   printf("\n");

   return 0;


}
