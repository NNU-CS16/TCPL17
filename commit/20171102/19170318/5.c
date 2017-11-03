#include <stdio.h>

int fac_bit_count(int n)
{
    int t1[1000]={1},t2[1000]={0};
    int i,j,len=1;
    for (i=1;i<=n;i++)
    {
      j=0;
      while (j<len)
      {
         t2[j]+=t1[j]*i;
         t2[j+1]=t2[j]/10;
         t2[j]%=10;
         t1[j]=t2[j];
         j++;
      }
      while (t2[j]>0)
      {
         j++;
         t2[j]=t2[j-1]/10;
         t2[j-1]%=10;
         t1[j-1]=t2[j-1];
      }
      len=j;
    }
    return len;
}

int main()
{

    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
    return 0;

}
