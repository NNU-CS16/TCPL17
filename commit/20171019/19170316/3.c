#include<stdio.h>
#include<math.h>
int main()
{
int n;
int x;
printf("please input x(X是整数)");
scanf("%d",&x);
if(x>0)
n=log10(x)+1;
if(x<0)
printf("fu ");
n=log10(-x)+1;
char s[n];
sprintf(s,"%d",x);
int i;
for(i=0;i<=n;i++)
{
switch(s[i])
{
case'0':printf("ling ");break;
case'1':printf("yi ");break;
case'2':printf("er ");break;
case'3':printf("san ");break;
case'4':printf("si ");break;
case'5':printf("wu ");break;
case'6':printf("liu ");break;
case'7':printf("qi ");break;
case'8':printf("ba ");break;
case'9':printf("jiu ");break;
}
}
if(x=0)
printf("0");
return 0;
}

