#include <stdio.h>
int LCM(int m,int n)
{   int t,j;
    double a;
    j = m;
    if (n%m == 0)
    {    printf("%d\n",n);
         n = 0;
    }
    else
    { 
         while(m != 0)
        {    t=n%m ;
             n=m;
             m=t;
        }
         a=(j*n)/m;
         printf("%lf\n",a); 
    }
}
int main()
{   int m,n;
    printf("请输入两个整数m，n(n>m)\n");
    scanf("%d%d",&m,&n);
    LCM(m,n);
    return 0;
}
