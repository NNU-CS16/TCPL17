#include <stdio.h>
#include <string.h>
int is_int_pal(int n)
{
	int i,t,len;
	char a[10];

	sprintf(a,"%d",n);

	len = strlen(a);

	for (i = 0; i < len / 2; i++)
	 {
	   if ( a[i] != a[len-i-1] ) 
	   t = -1;
	   else
	   t = 0;
	 }
	return t;
}

int main()
{
	int n;

	scanf("%d",&n);

	printf("%d\n",is_int_pal( n ));

	return 0;

}
