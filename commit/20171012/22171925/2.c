#include <stdio.h>
int main()
{
int a,b,c,m;
a=1;
b=2;
c=3;
while(a<97){
m=a*b*c;
a=a+3;
b=b+3;
c=c+3;
m=m+a*b*c;
}

printf("%d\n",m);
return 0;
}
