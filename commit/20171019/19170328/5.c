#include<stdio.h>
#include<stdlib.h>
/** It's great to see you here.
    It's great to see you here.
    **/
int main()
{
	char ch;
	char sign=' ';
	int len;
	int flag;
	len=0;
	flag=0;
	if ( (ch=getchar())!='.')
	{
        if (ch!=' ') len++;
	else if(len!=0) putchar(sign);
	flag=1; 
	printf("%d",len);
	len=0;
	}
	else
	{
         continue;
	}
	if(flag==1 && len!=0)
		putchar(sign);
	if(len) printf("%d",len);
	return 0;
}

