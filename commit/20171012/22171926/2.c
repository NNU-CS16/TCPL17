<<<<<<< HEAD
#include<stdio.h>
int main()
{
int sum,n;
sum=0;
for (n=1;n<=97;n+=3)
sum+=n*(n+1)*(n+2);
printf("%d/n",sum);
=======
#include <stdio.h>
int main()
{
int sum,n;
sum=0,n=1;
while(n<=97);
{
sum=sum+n*(n+1)*(n+2);
n=n+3;
}
printf("1*2*3+4*5*6+...+97*98*99=%d\n",sum);
>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
return 0;
}
