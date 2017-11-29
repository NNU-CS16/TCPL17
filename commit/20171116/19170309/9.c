#include<stdio.h>
#include<string.h>
int main()
{
char *city[6]={"nanjing","wuxi","xuzhou","changzhou","shuzhou"};
int j,i,k;
for(j=0;j<4;j++)
for(i=0;i<4-j;i++)
{
k=strcmp(*(city+i),*(city+i+1));
if(k>0)
{
*(city+5)=*(city+i);
*(city+i)=*(city+i+1);
*(city+i+1)=*(city+5);
}
}
for(i=0;i<5;i++)
printf("%s\n",*(city+i));
return 0;
}
