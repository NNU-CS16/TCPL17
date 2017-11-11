#include<stdio.h>
int main()
{
int x,mod,i;
scanf("%d",&x);
int arr[100];char numbers[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	for(i=0;1;i++)
	{
	mod=x%16;
	arr[i]=mod;
	x=(x-mod)/16;	
	if (x==0)break;
	}
for(i;i>=0;i--)
{
printf("%c",numbers[arr[i]]);
}
printf("\n");
return 0;
}
