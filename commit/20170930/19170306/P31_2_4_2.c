#include<stdio.h>
#include<math.h>
int main()
{
float x,a,b,c;
scanf("%f%f%f%f",&x,&a,&b,&c);
printf("%d\n",sqrt(fabs(x))!=4*a/b/c);
return 0;
}
