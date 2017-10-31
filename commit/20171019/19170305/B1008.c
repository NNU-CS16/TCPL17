#include<stdio.h>
int main()
{
int N,M;
int i;
int m1,m2;
int temp;
scanf("%d %d",&N,&M);
int x[N];
for(i=0;i<N;i++)
scanf("%d",x+i);
for(m1=0;m1<M;m1++)
{
   for(m2=0;m2<N-M;m2++)
   {
      temp=x[N-M+m1];
      x[N-M+m1]=x[m1+m2];
      x[m1+m2]=temp;
   }
}
for(i=0;i<N;i++)
{
   printf("%d",x[i]);
   printf(" ");
}
printf("\n");


return 0;
}
