#include<stdio.h>
void inttochar(int,char *);
void ascend(char *);
int main()
{
int i;
char number[4];char min[4];
scanf("%s",number);
do
{
	ascend(number);
	for (i=0;i<4;i++)
		min[i]=number[3-i];
	printf("%s - %s%c=",number,min,8);
	for (i=3;i>=0;i--)
	{
		number[i]+=48;
		number[i]-=min[i];
		if (number[i]<48)
			{
			number[i]+=10;
			number[i-1]--;
			}
	}
	printf("%s\n",number);
}while(number[0]!='6'||number[1]!='1'||number[2]!='7'||number[3]!='4');
return 0;
}
	
void ascend(char * number)
{
int i,j;
char temp;
	for (i=0;i<3;i++)
		for (j=0;j<3-i;j++)
			if (number[j]<number[j+1])
			{
			temp=number[j+1];
			number[j+1]=number[j];
			number[j]=temp;
			}
}

