#include<stdio.h>
int fac_bit_count(int n);
int main()
{
    int n;
    scanf("%d",&n);

    fac_bit_count(n);

    return 0;
}

int fac_bit_count(int n)
{
    int k,i,j=0;

    for(i=1;i<=n;i++)
        k=1*i;
    while(k!=0)
         {
          k=k/10;
          j++;
          }
    printf("%d\n",j);
}
