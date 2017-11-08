#include<stdio.h>
#include<string.h>
int is_str_pal(char *);
int main()
{
char arr[50];
scanf("%s",arr);
printf("%d\n",is_str_pal(arr));
return 0;
}

int is_str_pal(char * arr)
{
int i=strlen(arr);
for(int j=0;j<i/2;j++)
	if(arr[j]!=arr[i-1-j])
	return -1;
return 0;
}
