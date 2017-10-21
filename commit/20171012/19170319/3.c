#include<stdio.h>
int main()
{
 int a,n,sum,c,i;
 printf("please enter a");
 scanf("%d",&a);
 printf("please enter n");
 scanf("%d",&n);
 sum=0;
 c=a;
 for(i=1;i<=n;++i)
  {
    sum+=a;
    a=a*10+c;
  }
 printf("%d",sum);
 return 0; 
}
