#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) 
{
 return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);  
}

 int main()
 {
  unsigned int x,y;
  int p,n,s;
  printf("x=");
  scanf("%d",&x);
  printf("p=");
  scanf("%d",&p);
  printf("n=");
  scanf("%d",&n);
  printf("y=");
  scanf("%d",&y);
  s=setbits(x, p, n, y);
  printf("%d", s);
  return 0;
  }
