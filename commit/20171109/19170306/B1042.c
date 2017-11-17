#include<stdio.h>
int main()
{
int i=0;
int times[26];
char string[1000];
fgets(string,1000,stdin);
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
int max=0;
	for (i=0;i<26;i++)
		if (times[i]>times[max])
			max=i;
printf("%c %d\n",max+'a',times[max]);
return 0;
}
