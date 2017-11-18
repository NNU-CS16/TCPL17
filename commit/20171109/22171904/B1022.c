#include <stdio.h>
int main()
{
	int A,B,D;
	scanf("%d %d %d",&A,&B,&D);
	int sum=A+B;
	int ans[31],num=0;

	do{
		ans[num++]=sum%D;
		sum/=D;
	}while(sum!=0);

	for(int i=num-1;i>=0;i--)
	{
		printf("%d",ans[i]);
	}
	return 0;
}
