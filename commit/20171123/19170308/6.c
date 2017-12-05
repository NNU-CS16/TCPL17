#include<stdio.h>
#include<string.h>
int check(char*,int,int,char*);
int main()
{
char str[100],substr[100];
scanf("%s%s",str,substr);
printf("%d\n",check(str,0,strlen(str)-1,substr));
return 0;
}

int check(char* str,int left,int right,char* substr)
{
int i,j=0,count=0;
for (i=left;i<=right-strlen(substr)+1;i++)
{
j=0;
	if (str[i]==substr[0])
		for (j=0;j<strlen(substr);j++)
		if (str[i+j]!=substr[j])
		break;
		if (j==strlen(substr))	
	{
		count++;
		i+=strlen(substr)-1;
		}

}
return count;
}
