#include<stdio.h>
int main()
{
    int x,y,z,a;
    int n=1;
    0<a<=6;
    scanf("%d",x);
    for(x=a;x<=a+3;x++)
     for(y=a;y<=a+3;y++)
       for(z=a;z<=a+3;z++)
      if(x!=y&&y!=z&&z!=x)
       if(n<6)
      {
        n++;
        printf("%d%d%d",x,y,z);
      }
     else
     {
     n=1;
     printf("%d%d%d\n",x,y,z);
     }
   return 0;
}

