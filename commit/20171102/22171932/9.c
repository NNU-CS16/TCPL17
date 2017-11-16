#include<stdio.h>
int is_int_pal(int n);
int main()
{
    int n,a;
    printf("请输入数字：\n");
    scanf("%d",&n);
    a=is_int_pal(n);
    printf("%d\n",a);
}
int is_int_pal(int n)
{
    int p,q,i,a,b,s;
    p=n;
    q=n;
    a=1;
    s=0;
    while(p>0)
    p=p/10,a=a*10;
    for(i=10;i<=a;i=i*10)
      {
       b=a/i;
       s=s+(q%10)*b,q=q/10;
      }
    if(s==n)
      return 0;
    else 
      return -1;
}
