#include<stdio.h>
int Substr(const char*,const char*);
int main()
{
char str[1000];
char substr[1000];
fgets(str,1000,stdin);
fgets(substr,1000,stdin);
printf("%d\n",Substr(str,substr));
return 0;
}

int Substr(const char* str, const char* substr)
{
int i=0,j=0,k;
int numstr,numsub;
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
		for(k=0;k<numsub;k++)
		{
			if(str[i+k]!=substr[k])
			break;
		}
		if(k==numsub)
		return i;
	}
}
return -1;
}

