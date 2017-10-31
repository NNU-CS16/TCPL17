#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("请输入n(n>3): ");
    scanf("%d",&n);
    for(i=2;i<=(sqrt(n));i++)
      if(n%i==0)
        break;
    if(i<n)
        printf("%d不是素数\n",n);
    else
        printf("%d是素数\n",n);
    return 0;
}


