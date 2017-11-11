#include<stdio.h>
int fac_bit_count(int n)
{
    int i,a=1,count=0;
    for(i=1;i<=n;i++)
     {
      a=a*i;
     }  
    while(a!=0)
     {
      a/=10;
      count++;
     }

    return count;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
  
    return 0;
}
