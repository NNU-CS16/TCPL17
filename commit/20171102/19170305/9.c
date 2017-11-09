#include<stdio.h>
int is_int_pal(int);

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}

int is_int_pal(int n)
{
int i,j=0;
int x[50];
for(i=0;i<50;i++,j++)
{
x[i]=n%10;
n=(n-n%10)/10;
if(n==0)
break;
}
for(i=0;i<j;i++)
{
if(x[i]!=x[j-i])
{
return -1;
break;
}
else
return 0;
}
}
