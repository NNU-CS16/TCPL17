#include<stdio.h>
int fac_bit_count(long int n) 

{
  int  a=1,t=0;
  long int m;
  for(a=1;a<=n;a++){
   m=1*a;}
  if (m>=0){
   t++;
   m/=10;
   }
  else t=0;
  printf("n!的位数是：%d\n",t);
  return 0;
}
int main()
{
long int n;
scanf("%ld",&n);  
fac_bit_count(n);
return 0;
}
