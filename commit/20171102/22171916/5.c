#include<stdio.h>
int fac_bit_count(int n);
int main()
{
int n;
scanf("%d\n",&n);
printf("%d\n",fac_bit_count(n));
return 0;

}
int fac_bit_count(int n)
{
int i,z=1,num=0;
for (i=1;i<=n;i++)
     {
      z=z*i;
     }
 while(z)
 {
    num++;
    z/=10;
 }

return num;


}
