#include <stdio.h>
#include <string.h>

int is_str_pal(const char* str);
int main()
{
	char a[100];
	char* str;
	str=a;
	fgets(a,100,stdin);
	printf("Returned value is:%d\n",is_str_pal(str));
	return 0;
}

int is_str_pal(const char* str)
{
	 int temp=strlen(str),i=0;
	 int k=temp-1;
	 char ab[temp];
	 while(i<temp)
	 {
		 ab[i]=str[k-i];
		 i++;
	 }
		if(str[i]==ab[i]) return 0;
			else return -1;
}
