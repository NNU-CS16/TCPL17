#include<stdio.h>
int main()
{
long long unsigned int a,b,c,i,n;n=1;
printf("input a,b,c\n");
scanf("%llu%llu%llu",&a,&b,&c);
	for(i=0;i<b;i++)
	n*=a;
printf("%llu\n",n%c);
return 0;
}
