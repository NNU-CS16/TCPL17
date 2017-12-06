#include<stdio.h>
#include<string.h>

int substr(const char* str, const char* substr);
int main()
{
	char str1[1000],str2[1000];
	printf("input str");
	scanf("%[^/n]",str1);
	printf("input substr");
	scanf("%s",str2);
	printf("%d\n",substr(str1,str2));
	return 0;
}

int substr(const char* str, const char* substr)
{
    int len1,len2,i;
    len1=strlen(str);
    len2=strlen(substr);
    for(i=1;i<=len1-len2+1;i++)
	{
		if(strncmp(str+i,substr,len2)==0)
            return i;
	}
    return -1;
}   
