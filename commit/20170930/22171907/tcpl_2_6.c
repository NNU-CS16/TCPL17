#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
  return x & ~(~(~0 << n)<<(p+1-n))|(y& ~(~0<<n))<<(p+1-n);

}
  int main()
{
  unsigned x;int p;int n;unsigned y;

  printf("x=");
  scantf("%d",&x);
  printf("p=");
  scantf("%d",&p);
  printf("n=");
  scantf("%d",&n);
  printf("y=");
  scantf("%d",&y);
  printf("%d\n",setbits(x,p,n,y));
  return 0;
}
