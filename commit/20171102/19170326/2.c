#include<stdio.h>
void print_hex(int a)
{
	int arr[100];
	char s[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i,n;
	for(i=0;;i++)
	{
		arr[i]=a%16;
		a/=16;
		if(a==0)
			break;
	}
	n=i--;
	for(i=n;i>=0;i--)
		printf("%c",s[arr[i]]);
}
int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);
	return 0;
}
