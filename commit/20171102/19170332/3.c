#include<stdio.h>
int is_pow2(int n)

{
int m=1;
if(m<=n)
{m*=2;}

printf("%d\n",(m=n)?0:1);
return 0;
}
int main()
{
int n;
scanf("%d",&n);
is_pow2(n);
return 0;
}
 
   

