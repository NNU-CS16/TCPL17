#include<stdio.h>
int main()
{
 int b,i,n,c=0,a[31];
 scanf("%u",&n);
 b=n;
 while(b!=0)
 {
  i=b%2;
  a[c]=i;
  c++;
  b=b/2;
 }
 c--;
 for(;c>=0;c--)
 {
  printf("%d",a[c]);
 }
 printf("\n");
 printf("%o\n",n);
 printf("%x\n",n);
 return 0;
}
