#include<stdio.h>
int main()
{
  int n,a,b,c;
  scanf("%d",&n);
  for(a=n;a<n+4;a++)
 {
  for(b=n,b<n+4;b++;)
 {
  for(c=n;c<n+4;c++)
  if(b!=a&&c!=b&&a!=c)
  printf("%d",a*100+b*10+c);
  }
  printf("%c",8);
  printf("\n");
  }
 return 0;
}
