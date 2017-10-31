#include<stdio.h>
int main()
{
  int x,y,n,i;
  i=0;
  scanf("%d",&n);
  for(x=1;x<=n/2;++x)
    for(y=x;y<=n/2;++y)
       {
         if(x*x+y*y==n)
            {
             ++i;
             printf("%d %d\n",x,y);
            }
       }
  if(i==0)
  printf("No Solution");
  return 0;
}
