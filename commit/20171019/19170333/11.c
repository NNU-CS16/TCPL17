#include<stdio.h>
#include<math.h>
int geti(int i)
{
   int n;
   i=1;
   for (n=1;n<=i;n++)
   i*=n;
   return i;
}
int getx(int m,int j)
{
   int x;
   x=geti(m)*geti(j-1)/geti(j-2);
   return x;
}
   
int main()
{
   int n,m,j,row,x;
   
   printf("inout row :");
   scanf("%d",&row);
   printf("%18d\n",1);
   for (m=1;m<=row;m++)
   {
     for (n=1;n<=15-m;n++)
        printf(" ");
     for (j=1;j<=m+1;j++)
      {  x=getx(m,j);
        printf("%d\t",x);}
     printf("\n");
   }
   printf("\n");
   return 0;
}
