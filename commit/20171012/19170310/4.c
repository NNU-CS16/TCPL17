#include <stdio.h>
#include <math.h>

int main()
{
int i,n;
int a=1,b=1,sum=0;
for(i=1;i<11;i++)
 {
  for(n=1;n<11;n++)
  {
   if(n==i)
   {
     a=b*n;
     b=a;
   }
  }
 sum +=a;
}
printf("sum=%d\n",sum);
return 0;
} 


 
