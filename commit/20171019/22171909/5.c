#include <stdio.h>
#include <string.h>
 
int search46(char *p)
{
int TmpLength;
char searchString='.'; 
if(!strchr(p,searchString))
{
return 0;
}
else
{
char *px = strchr(p,searchString);
int re = px-p;
return re;
}}
int main(void)
{
char str[1000];
gets(str);
int flag=0;
char *pTmpStr=str;
int TmpLength;
TmpLength = search46(pTmpStr);
int length=0;
int i;
char tmp;
for(i=0;i<TmpLength;i++)
{   tmp=str[i];
    if(tmp==' ')
{
 if(length==0)
 continue;
 if(flag)
 printf(" ");
 flag++;
 printf("%d",length);
 length=0;
 continue;}
length++;
}
if(length!=0)
{
if(flag)
printf(" ");
printf("%d",length);
}
 return 0;
}
