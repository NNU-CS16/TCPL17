#include<stdio.h>
int count_substr(const char*,const char*);
int main()
{
char str[1000],substr[1000];
fgets(str,1000,stdin);
fgets(substr,1000,stdin);
printf("%d\n",count_substr(str,substr));
return 0;
}

int count_substr(const char* str, const char* substr)
{
int i=0,j=0;
int numstr,numsub;
int gs=0;
while(1)
{if(str[i]=='\0')break;i++;}
numstr=i-1;
while(1)
{if(substr[j]=='\0')break;j++;}
numsub=j-1;
for(i=0;i<=numstr-numsub;i++)
{
	if(str[i]==substr[0])
	{
		for(j=0;j<numsub;j++)
		{
			if(str[i+j]!=substr[j])
			break;
		}

		if(j==numsub)
		{gs++;i=i+numsub-1;}
	}
}
return gs;
}
