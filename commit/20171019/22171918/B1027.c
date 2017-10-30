#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,i,j,k;
   char c;
   scanf("%d %c",&a,&c);
   a-=1;
   b=1;
   while(a-2*(b+2)>=0)
   {
     b+=2;
     a-=2*b;
   }
   k=b/2;
   for(i=0;i<b;i++)
   {
      for(j=0;j<k-abs(i-k);j++)
          printf(" ");
      for(j=0;j<abs(i-k)*2+1;j++)
          printf("%c",c);
         printf("\n");
   }
   printf("%d\n",a);
   return 0;
}
