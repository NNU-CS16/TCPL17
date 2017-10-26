#include<stdio.h>
void binary(int);
int main()
{
int n;
scanf("%d",&n);
binary(n);
printf("%o\n%x\n",n,n);
return 0;
}

void binary(int n)
{
int i=0,j,m=n;
	while (m>1)
	{m=m/2;i++;}
int a[i];
	for(j=i;j>=0;j--)
	{a[j]=n%2;n=n/2;}
for (j=0;j<=i;j++)
printf("%d",a[j]);
printf("\n");return;
}
