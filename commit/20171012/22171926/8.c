<<<<<<< HEAD
#include<stdio.h>
=======
#include <stdio.h>
>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
int main()
{
int n,a,b;
scanf("%d",&n);
if (0<=n<=153)
{a=~(~0<<4)&n;
b=n>>4;
printf("%d\n",10*b+a);

}
else printf("wrong number\n");
return 0;
}
