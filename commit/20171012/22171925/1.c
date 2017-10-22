#include <stdio.h>
int main()
{int a,t;
a=2;
t=0;
while(a<101){
t=a+t;
a=a+2;
}
printf("%d\n",t);
return 0;

}
