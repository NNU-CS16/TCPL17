#include<stdio.h>
int main()
{
 int a,b,c;
 double k;


 scanf("%d%d%d",&a,&b,&c);

 k=(double)(a^b%c);

 printf("%f\n",k);

 return 0;
}


