#include<stdio.h>
int main(void)
{
   int a,i=0,x[32];

   printf("input a number:");
   scanf("%d",&a);
   while(a>0)
   {
       x[i]=a%2;
       i=i+1;
       a=a/2;
   }
   for(i--;i>=0;i--);
      printf("%d\n",a[i]);
   printf("%o\n%x\n",a,a);


  return 0;
}

  
