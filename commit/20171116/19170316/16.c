#include<stdio.h>

int main(int *work[])
{
FILE *p1,*p2;
char temp="/";
char a;
p1=fopen(work[1],"r");
int len=strlen(work[1])-1;
while(work[1][len]!='/' && len>0)	
	len--;
if(len>=0)
	strcat(work[2],work[1]+len);
	strcat(work[2],temp);
	strcat(work[2],work[1]);
p2=fopen(work[2],"w");
a=fgetc(p1);
while(a!=EOF)
{
	fputc(a,p2);
	a=fgerc(p1);
}
fclose(p1);
fclose(p2);
return 0;
}
