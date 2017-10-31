#include<stdio.h>
int main()
{
   int a,n,b,e,q,w,d,g,f;
   char c;
   scanf("%d%c",&a,&c);
   if(a>=1&&a<=1000)
   for(n=0;b<=a;n++)
{
   b=2*n*n-1;
}
   for(g=1;g<=(n+1)/2;g++)
{
   for(i=1;i<=g;i++)
   printf(" ");
   for(e=2*g-1;e>=7-2*g;e--)
   printf("*");
   printf("\n");
}
   for(d=(n+3)/2;d<=n;d++)
{
   for(q=d-1;q>=2*g-d;q--)
   printf(" ");
   for(w=3;w<=2*d-5;w++)
   printf("*");
   printf("*");
   printf("/n");
}
   f=a-b;
   printf("%d\n",f);
   return 0;
}
