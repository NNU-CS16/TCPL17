#include<stdio.h>

int main()
{

   int N,a=1,i,j,k,n;
   char c;

   printf("please input N and sign:");

   scanf("%d %c",&N,&c);

    while((a*a-1)/2+a<=N)
    {
       a++;
       a++;
    }

   a=a-2;
   for(i=1;i<=(a+1)/2;i++)
   { 
    for(j=1;j<=i-1;j++)
     printf(" ");
    for(k=1;k<=a+2-2*i;k++)
     printf("%c",c);
    printf("\n");
   }

   for(i=(a-1)/2;i>=1;i--)
   {
     for(j=1;j<=i-1;j++)
       printf(" ");
     for(k=1;k<=a+2-2*i;k++)
       printf("%c",c);
     printf("\n");
   }

   n=(a*a-1)/2+a;

   if(N-n!=0)
   printf("%d\n",N-n);

   return 0;



}
