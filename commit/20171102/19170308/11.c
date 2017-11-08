#include<stdio.h>
#include<string.h>
void reverse(char *);
int main()
{
char arr[50];
scanf("%s",arr);
reverse(arr);
puts(arr);
return 0;
}

void reverse(char * arr)
{
int len=strlen(arr);
int i;char temp;
for (i=0;i<len/2;i++)
	{
	temp=arr[i];
	arr[i]=arr[len-1-i];
	arr[len-1-i]=temp;
	}
}
