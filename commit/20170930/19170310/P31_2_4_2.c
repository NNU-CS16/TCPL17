#include<stdio.h>
#include<math.h>
int main()
{
 float x,a,b,c;
 scanf("%e,%e,%e,%e",&x,&a,&b,&c);
 if(sqrt(fabs(x))!=((4*a)/(b*c)))
 printf("buxiangdeng");
 else printf("xiangdeng");

    return 0;
}



