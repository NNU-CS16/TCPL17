#include<stdio.h>
#include<string.h>
int main()
{
int i,j,min;
char* temp;
char* name[5]={"nanjing","wuxi","xuzhou","changzhou","shuzhou"};
for (i=0;i<4;i++)
	{
	min=i;
	for (j=i+1;j<5;j++)
		if (strcmp(name[j],name[min])<0)
		min=j;
	temp=name[i];
	name[i]=name[min];
	name[min]=temp;
	}
for (i=0;i<5;i++)
	printf("%s ",name[i]);
printf("\n");
return 0;
}

