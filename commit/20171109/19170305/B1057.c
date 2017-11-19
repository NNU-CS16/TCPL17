#include<stdio.h>
int main()
{
char word;
int ai=0,bi=0;
int N=0,M;
int p=0,q=0;
while(word!='\n')
{
scanf("%c",&word);
if(word>='A'&&word<='Z')
{N=N+word-64;continue;}
else if(word>='a'&&word<='z')
{N=N+word-96;continue;}
else
continue;
}
while(N!=0)
{
if(N%2==0)
{p++;N=(N-N%2)/2;continue;}
else
{q++;N=(N-N%2)/2;continue;}
}
printf("%d %d\n",p,q);
return 0;
}                              
