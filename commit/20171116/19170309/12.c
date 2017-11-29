#include<stdio.h>
int my_strcmp(const char* str1, const char* str2);

int main()
{
char str1[1000],str2[1000];
int i=0;
fgets(str1,1000,stdin);
fgets(str2,1000,stdin);
if(my_strcmp(str1,str2)>0)
printf("str1>str2\n");
else if(my_strcmp(str1,str2)==0)
printf("str1=str2\n");
else
printf("str1<str2\n");
return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
int i;
int j=0,k=0,max;
for(i=0;i<1000;i++,j++)
{if(*(str1+i)=='\0')break;}
for(i=0;i<1000;i++,k++)
{if(*(str2+i)=='\0')break;}
max=j>=k?j:k;
for(i=0;i<max;i++)
{
if(*(str1+i)=='\0'&&*(str2+i)!='\0')
return -1;
if(*(str1+i)>*(str2+i))
return 1;
if(*(str1+i)<*(str2+i))
return -1;
if(*(str1+i)!='\0'&&*(str2+i)=='\0')
return 1;
if(*(str1+i)==*(str2+i))
continue;
}
return 0;
}

