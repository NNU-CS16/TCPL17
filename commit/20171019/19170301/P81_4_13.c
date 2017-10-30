#include<stdio.h>
#include<math.h>
int main()
{
 int n, i, k;
printf("请输入n(n>3):");
scanf("%d",&n);
k=(int)sqrt(n);
for (i = 2;i <= k;i ++)
         if(n%i==0)
                   break;
         if(i<=k)
            printf("%d不是素數\n",n);
         else
            printf("%d是素數\n",n);
return 0;
}
