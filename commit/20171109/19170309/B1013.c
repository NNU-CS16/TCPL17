#include<stdio.h>
int pan(int n);
int main()
{
int m,n,i,j,k;
scanf("%d %d", &m,&n);

int a[10000]={2,3};
for(i=4,j=2;i<=10000;i++)
      if(pan(i)==1)
       {a[j]=i;
       j++;}
for(i=0,k=0;i<=n-m;i++,k++)
    {if(k&&k%10==0)
      printf("\n");
   printf("%d ", a[m+i-1]);}
 printf("\n");
return 0;
}
int pan(int n)
{
int m;
for(m=2;m<n;m++)
  {if(n%m==0)
   return 0;}
return 1;
}
 
