<<<<<<< HEAD
#include<stdio.h>
int main()
{
int i,j,cache=1,sum=0;
for (i=1;i<=10;i+=1)
	{for (j=1;j<=i;j+=1)
	{cache*=j;}
	sum+=cache;
	cache=1;}
printf("%d",sum);
=======
#include <stdio.h>
int main()
{
int a,b,c;
for(a=2,b=1,c=1;a<=10;a++)
{
b*=a;
c+=b;
}
printf("1!+2!+3!+...+10!=%d\n",c);
>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
return 0;
}
