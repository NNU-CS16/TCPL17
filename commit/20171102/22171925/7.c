#include <stdio.h>
int GCD_iterative(int m,int n)
{    int t;
     while(m != 0)
     {    t = n % m ;
          n = m;
          m = t;
     }
     printf("%d\n",n);
}
int main()
{
    int m,n;
    printf("请输入整数m，n\n");
    scanf("%d%d",&m,&n);
    GCD_iterative(m,n);
    return 0;
}

