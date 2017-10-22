#include<stdio.h>
#include<math.h>
int main()
{
int a,n,s,i,h;
scanf("%d",&a);
scanf("%d",&n);
for(i=1,s=0;i<n+1;i++)
{
	h=pow(a,i);
	s=s+h;
}
printf("%d\n",s);
return 0;
}
