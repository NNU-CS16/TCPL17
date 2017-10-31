#include<stdio.h>
long long int count(char *,int);
int main()
{
char A[12],B[12];
int a,b;int i=0;
while(1){scanf("%c",A+i);if(A[i]==' ') break;i++;}
scanf(" %d ",&a);i=0;
while(1){scanf("%c",B+i);if(B[i]==' ') break;i++;}
scanf("%d",&b);
printf("%llu\n",count(A,a)+count(B,b));
return 0;
}

long long int  count(char * A,int a)
{
int i=0,j=0,sum=0;
	while(A[i]!=' ')
	{if (*(A+i)==a+48) j++;i++;}
for (;j>0;j--) sum=sum*10+a;
return sum;
}
