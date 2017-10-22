#include <stdio.h>
int main()
{int a,b,c;
a=1;
b=1;
c=0;
while(b<11)
{
b=b+1;
a=a*b;
c=a+c;
}
printf("%d\n",c+1);
return 0;

}
