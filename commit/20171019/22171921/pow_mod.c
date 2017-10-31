#include<stdio.h>
#include<math.h>
int pow_mod(int a,int b,int c)
{
int i,j;
i=pow(a,b);
j=i%c;
return j;
}
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%d\n",pow_mod(a,b,c));
return 0;
}


