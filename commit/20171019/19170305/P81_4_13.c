#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
printf("请输入n:");
scanf("%d",&n);
if(n<=3)
printf("Wrong!\n");
else
{
for(i=2;i<=sqrt(n);i++)
   {
      if(n%i==0)
      {
         printf("%d不是素数。\n",n);
         break;
      }
      else
      {
         printf("%d是素数\n",n);
         break;
      }
   }
}
return 0;
}

