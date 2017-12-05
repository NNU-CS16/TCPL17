#include<stdio.h>

int my_strlen(const char* str)
{
	int n,i=0;
	for(n=0;str[n]!='\0';n++)
		i++;
	return i;
}

int main()
{
char str[100];
scanf("%[^\n]",str);
printf("%d",my_strlen(str));
return 0;
}
