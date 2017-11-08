#include<stdio.h>
int is_int_pal(int);
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}

int is_int_pal(int n)
{
int i=0;
char arr[50];
while(1)
	{
	arr[i]=(char)((n%10)+48);
	if(n<10)break;
	n/=10;
	i++;
	}
for(int j=0;j<(i+1)/2;j++)
	if(arr[j]!=arr[i-j])
	return -1;
return 0;
}
