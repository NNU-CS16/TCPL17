#include<stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr)
{
	int a = 0;
	int b ;
	int n = 0;
	int num = 0;
	while(str[a] != '\0')
	{
		a++;
	}
	for(b = a,n = 0;substr[n] == str[b];n++,b++)
	
		if(substr[n+1] == '\0')
		{
			num++;
			break;
			
		}
		
		return num;
}


int main()
{
	char str[100],substr[100];
	scanf("%s%s",str,substr);
	printf("%d\n",count_substr(str,substr));
	return 0;
}

