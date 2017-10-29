#include<stdio.h>
#include<string.h>
int  searchcap(char *,int );
int main()
{
char s[80];
fgets(s,81,stdin);
int i,border;
int n=strlen(s)-1;int * p;p=&n;
while(n>=0)
	{
		border=n;n=searchcap(s,n);i=n;
		while(i<border&&('A'<=s[i]<='Z'||'a'<=s[i]<='z'))
		{printf("%c",s[i]);i++;}
		n--;printf(" ");
	}
return 0;
}
int searchcap(char * s,int n)
{
while((('A'<=(s[n]))&&((s[n])<='Z'))==0)
	n--;
return n;
}
