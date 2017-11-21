#include<stdio.h>

int main()
{
char Z[1001];
int N[26]={0};
scanf("%[^\n]",Z);
int i,k=0;
for(i=0;Z[i]!='\0';i++)
{
	if(Z[i]>='A' && Z[i]<='Z')
	{
	Z[i]=Z[i]+32;
	k=Z[i]-97;
	N[k]++;
	} 
	if(Z[i]>='a' && Z[i]<='z')
	{
	k=Z[i]-97;
	N[k]++;
	}}
int max=0,shishui=0;
for(i=0;i<26;i++)
	{
	if(N[i]>max)
		{
		max=N[i];
		shishui=i;
		}
	}
printf("%c %d\n",shishui+97,max);
return 0;

}

