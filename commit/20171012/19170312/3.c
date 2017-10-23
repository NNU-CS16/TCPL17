#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,a;
 long int s=0,m=0;
 printf("please input the number of n and a.\n");
 scanf("%d%d",&n,&a);
 for(i=1,s=0;i<=n;i++)
  {
   m=pow(10,n-i)*i*a;
   s=s+m;
  }
 printf("a+aa+aaa+...+aa...a=%ld\n",s);
 return 0;
}
