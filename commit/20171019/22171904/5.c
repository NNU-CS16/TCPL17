#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
char sign=' ';
int len;
int flag;
len=0;
flag=0;
while( (ch=getchar())!='.')
{
if(ch!=' ') len++;
else if(len!=0){
if(flag!=0) putchar(sign);
flag=1;
printf("%d",len);
len=0;
}
else{
continue;
}
}
if(flag==1 && len!=0) putchar(sign);
if(len) printf("%d",len);
return 0;
}
