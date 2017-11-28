#include<stdio.h>
int main()
{
int i;
char A[4],B[4],output[5]={'0'};
scanf("%s%s",A,B);
for (i=4;i>=1;i--)
	{
	if (A[i-1]+B[i-1]-96>=10)
		{	
		A[i-1]-=10;
		output[i-1]++;
		}
	output[i]=A[i-1]+B[i-1]-48;
	}
if (output[0]=='0')
	output[0]='\t';
printf("%s\n",output);
return 0;
}
