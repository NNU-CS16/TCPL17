#include <stdio.h>
int main()
{
    int x=2,y=1,z=1;
    printf("x=");
    scanf("%d%d%d",&x,&y,&z);
    while(z<11)
    {
      y*=x;
      z+=y;
      x++;
    }
    printf("z=%d\n",z);
    return 0;
}


