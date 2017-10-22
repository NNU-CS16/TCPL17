#include <stdio.h>
int main()
{
int i[8]={0},a,b,d;
printf("a=");
scanf("%d",&a);
printf("%o\n",a);
printf("%x\n",a);
b=0;
while (b++<8)
{
if(a%2==0)
d=0;
else
d=1;
i[b]=d;
a=a/2;
}
for(b=8;b>0;b--)
printf("%d",i[b]);
printf("\n");
return 0;
}
