#include<stdio.h>
#include<time.h>
int main()
{
  int i,j;
  int a=122,b=23,c=3,t[c],k,raw;
  for(i=1;i<=100000;i++)
    t[0]=a%c;
    for(j=1;j<b;j++)
    {
      t[j]=(t[j-1]*a)%c;
      if(t[j]==t[0]);
      break;
    }
      k=b%j;
      if(k==0)k=j-1;
      else k--;
  printf("mod=%llu\t%d\n",t[k],i);
  return 0;
}
