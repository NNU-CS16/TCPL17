#include<stdio.h>
#include<math.h>
int main()
{
    double a,n,x=1,sum=0;
    printf("请输入a,n的值\n");
    scanf("%d,%d\n",&a,&n);
    do
      {
       sum=sum+pow(a,x);
       x++;
      }while(x<=n);
    printf("%d\n",sum);
    return 0;
}
