#include<stdio.h>
int main()
{
 int a,x,y,z;
 int i;  
 scanf("%d",&a);
 x=a+1;
 y=a+2;
 z=a+3;
 printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",a,x,y,a,x,z,a,y,x,a,y,z,a,z,x,a,z,y);
 printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",x,a,y,x,a,z,x,y,a,x,y,z,x,z,a,x,z,y);
 printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",y,a,x,y,a,z,y,x,z,y,x,z,y,z,a,y,z,x);
 printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",z,a,x,z,a,y,z,x,a,z,x,y,z,y,a,z,y,x);
 return 0;
}
