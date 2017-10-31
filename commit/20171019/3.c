#include<stdio.h>
#include<string.h>
void m(char str[20]);
int main()
{
	int court=0;
	char str[20];
	int n;
	gets(str);
	n=strlen(str);
	m(str);
	return 0;
}

void m(char str[20])
{
	char i;
	int count=0;
	int n=strlen(str);
	for(i=0;i<=n-1;i++)
	{
		if(str[i]=='-')
		printf("fu");
		if(str[i]=='0')
		printf("ling"); 
		if(str[i]=='1')
		printf("yi");
		if(str[i]=='2')
		printf("er");
		if(str[i]=='3')
		printf("san"); 
		if(str[i]=='4')
		printf("si");
		if(str[i]=='5')
		printf("wu");
		if(str[i]=='6')
		printf("liu"); 
		if(str[i]=='7')
		printf("qi"); 
		if(str[i]=='8')
		printf("ba");
		if(str[i]=='9')
		printf("jiu");
		count++;
		if(count<=n-1)
		printf(" ");
		}
	return 0;
}

