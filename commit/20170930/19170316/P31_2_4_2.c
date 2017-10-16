#include<stdio.h>
#include<math.h>
int main()
{
int x,a,b,c,y,k;
scanf("%d %d %d %d",&x,&a,&b,&c);
y=sqrt(fabs(x));
k=4*a/b*c;
printf("%d",y==k?0:1);
return 0;
}
