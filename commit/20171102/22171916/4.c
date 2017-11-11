#include<stdio.h>
int count1_in_bin(int n);
int main()
{
  int n;
  scanf("%d\n",&n);
  printf("%d\n",count1_in_bin(n));
  return 0;

}
int count1_in_bin(int n)
{
int num=0;
while(n>0)
{
if (n%2==1){num++;}
n=n/2;
}
return num;

}

