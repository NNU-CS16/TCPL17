#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
int m,n;
printf("请输入a,b,c:");
scanf("%d,%d,%d",&a,&b,&c);
if(a=-1)
printf("Wrong!\n");
else
{
m=pow(a,b);
n=m%c;

printf("n=%d\n",n);
}
return 0;
}
~   
