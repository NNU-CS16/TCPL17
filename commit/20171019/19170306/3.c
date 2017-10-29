#include<stdio.h>
int main()
{
char * voice[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
char num[50];
scanf("%s",num);
int i=0;
if (num[0]=='-'){printf("fu");i=1;}
	while(num[i]!='\0')
	{printf(" %s",*(voice+(num[i]-48)));i++;}
return 0;
}
