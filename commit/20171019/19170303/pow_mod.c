#include<stdio.h>
int main()
{
long long int a,b, c,d,i,n;
printf("请输入abc的值:");
scanf("%d%d%d",&a,&b,&c);
for(i=1,d=1;i<=b;i++)
    d*=a;
n=d%c;
printf("a^bmodc=%ld\n",n);
return 0;
}
