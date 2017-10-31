#include<stdio.h>
int main()
{
int a,b,c,i;
printf("input a b c :");
scanf("%d %d %d",&a,&b,&c);
int result=1;
for(i=0;i<b;i++)
  
   result = (a*result) % c;
  
printf("%d^%d %% %d = %d\n",a,b,c,result);
return 0;
}
