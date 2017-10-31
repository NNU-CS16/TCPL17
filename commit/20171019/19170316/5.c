#include<stdio.h>
int main()
{
char x,m;
int i;
#define SPACE " "
scanf("%c",&x);
m=getchar();
if(m!=SPACE)i++;m=getchar();
if(m==SPACE)printf("%d ",i);i=0;m=getchar();
if(m='.')printf("%d",i);
return 0;
}
