#include<stdio.h>
#include<string.h>
void k_reverse(char* str,int k);
int main()
{
char str[1000];
int k;
scanf("%d %s",&k,str);
k_reverse(str,k);
printf("%s\n",str);
return 0;
}

void k_reverse(char* str,int k)
{
char temp;
for (int i=k-1;i<strlen(str);i+=k)
	{
	temp=str[i-k+1];
	str[i-k+1]=str[i];
	str[i]=temp;
	}
}
