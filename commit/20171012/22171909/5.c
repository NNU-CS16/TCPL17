#include <stdio.h>
int main()
{
int x,y,z,n;
printf("n=");
scanf("%d",&n);

for(x=1;x<=n;x++)
{

for(y=1;y<=x;y++)

printf("%d*%d=%d",x,y,z=x*y);
printf("\n");
}
return 0;
}


