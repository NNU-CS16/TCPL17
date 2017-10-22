#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%1d%1d%1d",&a,&b,&c);
  if(c==0){
    if(b==0)
    printf("%d\n",a);
    else printf("%d%d\n",b,a);
  }
  else printf("%d%d%d\n",c,b,a);
  return 0;
}

