#include<stdio.h>
int is_int_pal(int n);
int main()
{
  int n;
  scanf("%d",&n);
  is_int_pal(n);
  return 0;
}
int is_int_pal(int n)
{
    int m,sum=0;
     m=n;
   
   while(m)
      {
         sum=sum*10+m%10;
         m/=10;
      }
   if(sum==n) printf("0\n");
   else    printf("-1\n");
}
