#include<stdio.h>
int is_int_pal(int n)      
{
 int t=n,len=0,a[1000];
 for(;t>0;t/=10)
  len++;
 int min=0,max=len-1;
 for(int i=0;i<=len-1;i++)
 {
  a[i]=n%10;
  n/=10;
 }
 for(int i=0;min<=max+1;min++,max--,len-=2)
 {
  if(len==0||len==1)return 0;
  if(a[min]!=a[max])return -1;
 }
}
int main()
{
 int n;
 scanf("%d",&n);
 printf("%d\n",is_int_pal(n));
 return 0;
}

