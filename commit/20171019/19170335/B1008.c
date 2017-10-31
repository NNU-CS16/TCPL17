#include<stdio.h>
int main()
{
	int a,b,i;
	int j=0;
	int s[100];

	scanf("%d%d",&a,&b);
	b=a-b;
	for(i=0;i<a;i++)
	    scanf("%d",&s[i]);
	for(i=b;i<a;i++)
	     printf("%d ",s[i]);
	for(i=0;i<b-1;i++)
	     printf("%d ",s[i]);
	printf("%d\n",s[i]);

	return 0;
}
	   
             

