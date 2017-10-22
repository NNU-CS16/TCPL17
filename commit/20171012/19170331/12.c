#include <stdio.h>
int main()
{
      int x,y;
      scanf("%d/%d",&x,&y);
      int a=x,b=y;
      float z;
      z=a%b;
      a=b;
      b=z;
      printf("%d/%d\n",b/x,a/x);

      return 0;
}



