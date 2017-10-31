#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
printf("please input a b c");
scanf("%d%d%d",&a,&b,&c);
d=pow(a,b);
e=d%c;
printf("%d\n",e);
return 0;
}
