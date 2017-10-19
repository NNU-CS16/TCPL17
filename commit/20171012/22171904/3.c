#include<stdio.h>
int main()
{
int a,n,j=0,s=0,i=0;
printf("a=");
scanf("%d",&a);
printf("n=");
scanf("%d",&n);
while (i<n)
{i++;
j=j*10+a;
s+=j;
}
printf("%d\n",s);
return 0;
}



