#include <stdio.h>
#include <string.h>
int fac_bit_count(int n)
{
 int i,p;
 for(p=1,i=2;i<=n;i++)
  {
  p*=i;
  }
 char arr[100000];
 int k;
 k=strlen(arr);
 printf("%d",k);
}
int main()
{
 int n;
 scanf("%d",&n);
 fac_bit_count(n);
 return 0;
}


