#include<stdio.h>
int fac_bit_count(int n);
int main()
{
   int n;
   printf("请输入n:");
   scanf("%d",&n);
   fac_bit_count(n);
   return 0;
}
int fac_bit_count(int n)
{
    int i,e=1,s=1;
    for(i=2;i<=n;i++)
       {
       s=s*i;
       while(s>=10)
            s=s/10,e++;
       }
    printf("%d\n",e);
}
