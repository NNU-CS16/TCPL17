#include<stdio.h>    
int main()
{
    int x,y,z,a,b;

    scanf("%d/%d",&x,&y);
    a=x;
    b=y;

    while(b!=0)
      {
         z=a%b;
         a=b;
         b=z;
      }
    x=x/a;
    y=y/a;
    printf("%d/%d",x,y);
    return 0;
}

