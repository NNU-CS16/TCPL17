#include <stdio.h>
int count1_in_bin(int n);
int main()
{
  int n;
  scanf("%d", &n);
  count1_in_bin(n);
  return 0;
}
  int count1_in_bin(int n)
 {
  int i,j;
  i = 1;
  j = 0;
 do
 { 
    i*=2;
 }  
   while (i<n);
   while (i>0)
{   
   if (i<=n)
{
   j++;
   n = n-i;
}
   i=i/2;
}
  printf("%d",j);
 }
   
  
