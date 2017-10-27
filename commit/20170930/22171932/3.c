#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,s;
    s=0;
    printf("Please input n,a :\n");
    scanf("%d%d",&n,&a);
    if(a<=9)
      {
      for(i=1;i<=n;i++)
         s=s+a*(10^(i-1));
      printf("a+aa+aaa+...+aa...a(n个a)=%d\n",s);
      }
    else
        printf("input data error\n");
    return 0;
}   
