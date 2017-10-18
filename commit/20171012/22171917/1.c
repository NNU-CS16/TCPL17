#include<stdio.h>
int main()
{
    int x=2,y=0;
    printf("x=");
    scanf("%d%d",&x,&y);
    do
    {
      y=y+x;
      x=x+2;
     }while(x<=100);
      printf("y=%d\n",y);
    return 0;
}
      
