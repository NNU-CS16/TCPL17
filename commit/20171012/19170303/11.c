#include<stdio.h>
int main ()
{
int A,a,b,c,d=1;
printf("输入一个小于6的整数：");
scanf("%d",&A);
for(a=A;a<=A+3;a++)
for(b=A;b<=A+3;b++)
for(c=A;c<=A+3;c++)
	if(a!=b&&a!=c&&b!=c)
		if (d<6)
 {
 d++;
 printf(" %d",a*100+b*10+c);
 }
 else
 {
 d=1;printf(" %d\n",a*100+b*10+c);
 }
return 0;
}
