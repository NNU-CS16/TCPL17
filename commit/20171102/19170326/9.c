#include<stdio.h>
int is_int_pal(int n)
{
	int arr[20];
	int i=0,m,flag=0;
	while(n!=0)
	{
		i++;
		arr[i]=n%10;
		n/=10;
	}
	m=i;
		for(i=1;i<=m;i++)
		{
			if(arr[i]!=arr[m+1-i])
				flag=-1;
		}
	return flag;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",is_int_pal(n));
	return 0;
}
