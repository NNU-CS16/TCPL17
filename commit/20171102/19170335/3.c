#include<stdio.h>
#include<math.h>
int is_pow(int n)
{
	int a;
	if(((n&n-1)==0)&& n>0)
	  a=0;
	else
	  a=-1;
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
        printf("%d",is_pow(n));
	return 0;
}



