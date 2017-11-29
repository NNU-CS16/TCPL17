#include<stdio.h>
#include<string.h>
void my_strcpy( char *dest,  const char *src )
{
int len=strlen(src);
for(int i=0;i<len;i++)
	dest[i]=src[i];
dest[len]='\0';
}

int main()
{
char src[100],dest[100];
scanf("%[^\n]",src);
my_strcpy(dest,src);
int len=strlen(src);
for(int k=0;k<len;k++)
printf("%c",dest[k]);
return 0;
}
