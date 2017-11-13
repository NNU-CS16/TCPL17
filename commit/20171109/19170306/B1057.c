#include<stdio.h>
int main()
{
int i=0;
int times[26];
char string[100000];
fgets(string,100000,stdin);
	for (i=0;i<26;i++)
		times[i]=0;
	i=0;
	while (string[i]!='\0')
	{
		if (string[i]>='a'&&string[i]<='z')
			times[string[i]-'a']++;
		else if (string[i]>='A'&&string[i]<='Z')
			times[string[i]-'A']++;
		i++;
	}
int sum=0,count=0;
	for (i=0;i<26;i++)
		sum+=times[i]*(i+1);
	for (i=0;sum>0;i++)
	{
		if ((sum&1)==1)
			count++;
		sum=sum>>1;
	}
printf("%d %d\n",i-count,count);
return 0;
}
