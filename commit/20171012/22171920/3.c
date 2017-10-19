#include<stdio.h>
  int main()
{
    int a,n,i,sum=0,y=0;
    scanf("a=%d,n=%d/n",&a,&n);
    for(i=1;i<=n;i++)
     {y=a+y*10;
      sum=sum+y;} 

    printf("a+aa+aaa+...+a...a(n个a)=%d/n",sum);
    
    return 0;
}
