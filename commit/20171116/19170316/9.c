#include<stdio.h>
#include<string.h>
int main()

{
int i,j;
char *p[]={"nanjing","wuxi","xuzhou","changzhou","shuzhou"};
char *ptemp=NULL;
for(i=0;i<4;i++)
{
	for(j=i+1;j<5;j++)
	{
	if(strcmp(p[j],p[i])<0)
		{
		ptemp=p[i];
		p[i]=p[j];
		p[j]=ptemp;
		}
	}
}
for(i=0;i<5;i++)
printf("%s\n",p[i]);
return 0;
}
