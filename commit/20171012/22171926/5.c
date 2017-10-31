<<<<<<< HEAD
#include<stdio.h>
int main()
{
int i,j;
for (i=1;i<=9;i+=1)
	{
	for (j=1;j<=9;j+=1)
	printf("%d*%d=%d\t",i,j,i*j);
	printf("\n");
	}
return 0;
=======
#include <stdio.h>
int main()
{
int a,b,c;
for(a=1;a<=9;a++)
{
for(b=1;b<=a;b++)
{
c=a*b;
printf("%d%d=%d,a,b,c",a,b,c);
}
printf("\n");
}
>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
}
