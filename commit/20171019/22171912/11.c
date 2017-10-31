#include <stdio.h>
int main()
{
    int i,j,n,a[1000][1000]; 

    printf("请输入30以内正整数n：");
    scanf("%d",&n);

    for(i=0;i<n;i++)
       a[i][0]=1;                        //算每行第一个数
    for(i=1;i<n;i++)
    {
       for(j=1;j<=i;j++)
          a[i][j]=a[i-1][j-1]+a[i-1][j];//算中间数：上面两数之和
    }
    for(i=0;i<n;i++)                    //输出
    {
       for(j=0;j<=i;j++)
          printf("%d\t",a[i][j]);
       printf("\n");
    }
    return 0;
}
