#include <stdio.h>
#include <string.h>
int substr(const char* str,const char* substr)
{
        int i,j,flag=-1;
	for(i=0;i<=(strlen(str)-strlen(substr));i++)
	{
		flag=i;
		for(j=0;j<strlen(substr);j++)
         	if(substr[j]!=str[i+j])
		break;
		if(j==strlen(substr))
		return flag;
	}
	return -1;
}
int main()
{
  char a[81];
  char b[81];
  printf("请输入主串: \n");
  gets(a); 
  printf("请输入子串: \n");
  gets(b); 
  substr(a,b);
  return 0;
}
