#include <stdio.h>
#include <string.h>

int is_int_pal(int n); 

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",is_int_pal(n));
	return 0;
}
int is_int_pal(int n)
{
	char s[100];
	sprintf( s, "%d", n);
	char i, j;
	for( i=0,j=strlen(s)-1;j>=i;i++,j--)
		if(s[i]!=s[j])
			return -1;
		else 
			return 0;
}
