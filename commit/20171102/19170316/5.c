#include<stdio.h>
int fac_bit_count(int n)
{
int j=1,k,m;
for(k=1;k<=n;k++)
j=j*k;
for(m=0;j>0;j=j/10)
m++;
printf("%d",m);

}
int main()
{
int n;
scanf("%d",&n);
fac_bit_count(n);
return 0;
}

