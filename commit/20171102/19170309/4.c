#include<stdio.h>
int count1_in_bin(int n); 
int main()
{

int n;
scanf("%d", &n);
printf("1的个数为：%d\n", count1_in_bin(n); );

return 0;
}

int count1_in_bin(int n)
{
int a[100],i,b=n,c=0;
for(i=0;b>=1;i++)
  {a[i]=b%2;
   b=b/2;
   if(a[i]!=0)           
   c++;}
   return c;
}


