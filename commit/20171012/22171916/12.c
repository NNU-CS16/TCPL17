#include<stdio.h>
int main()
{
int a,b;

scanf("%d%d",&a,&b);
int i=a,k=b;
int temp;

while (k)
{temp=i%k; i=k; k=temp;};
printf("%d/%d\n",a/i,b/i);
return 0;


}
