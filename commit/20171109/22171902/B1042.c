#include<stdio.h>
#include<string.h>
void frequent(char arr[]);
int main()
{
    char arr[1000];
	gets(arr);
    frequent(arr);
    return 0;
}

void frequent(char arr[])
{
    int num[26]={0};
	int n=strlen(arr);
	int i,max=0;
    for(i=0;i<n;i++)
		if(arr[i]>='a'&&arr[i]<='z')
			num[arr[i]-'a']++;
		else if(arr[i]>='A'&&arr[i]<='Z')
			num[arr[i]-'A']++;
	for(i=0;i<26;i++)
	{
		if(num[i]>num[max])
			max=i;
	}
	printf("%c %d",max+'a',num[max]);

}


