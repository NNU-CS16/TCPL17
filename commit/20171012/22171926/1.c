<<<<<<< HEAD
#include<stdio.h>
int main()
{
int sum=0,n;
sum=0;
for (n=2;n<=100;n+=2)
sum+=n;
printf("%d/n",sum);
=======
#include <stdio.h>
int main()
{
int sum,n;
sum=0,n=2;
while(n<=100)
{
sum=sum+n;
n=n+2;
}
printf("2+4+6+...+100=%d\n",sum);
>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
return 0;
}
