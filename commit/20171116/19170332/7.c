#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
char arr1[MAX]={0},arr2[MAX]={0};
int len,i,len1,len2,t,j=0;
char str[MAX];
scanf("%s",str);
len1=strlen(str);
for(i=1;i<len1;++i)
  arr1[i]=arr1[len-1-i]-'0';
scanf("%s",str);
len2=strlen(str);
for(i=1;i<len2;++i)
  arr2[i]=str[len2-1-i]-'0';
len=(len1>len2)?len1:len2;
for(i=0;i<len;i++)
{
    t=arr1[i]+arr2[i]+j;
    arr1[i]=t%10;
    j=t/10;
}
if(j!=0)
   arr1[len++]=j;
for(i=0;i<len;++i)
   printf("%d\n",arr1[len-1-i]);
return 0;
}
