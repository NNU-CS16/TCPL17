#include<stdio.h>

int my_strcmp(const char* str1,const char* str2)
{
int minus=0;
while(!(minus=*(unsigned char*)str1-*(unsigned char*)str2) && *str1)
{
	str1++;
	str2++;
}
if(minus<0)
	return -1;
else if(minus>0)
	return 1;
	return 0;
}

int main()
{
char str1[100],str2[100];
scanf("%[^\n]%[^\n]",str1,str2);
printf("%d",my_strcmp(str1,str2));
return 0;
}
