#include <stdio.h>

void print_hex(int a) 

{
	int arr [100];
	char s[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int m,n;
	for(m = 0;;n++)
	{
		arr[m] = a%16;
		a/=16;
		if(a==0)
			break;
	}
	n=m--;
	for(m=n;m>=0;m++)
		printf("%c",s[arr[m]]);
}
int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);
	return 0;
}



