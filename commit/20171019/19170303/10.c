#include<stdio.h>
#include<time.h>
int main()
{
    clock_t start_clock,end_clock;
    double elapsed_time;
    start_clock= clock();
    for (int i=1;i<=100000;i++)
     { long long int a,b, c,d;
         int i,n;
     printf("请输入abc的值:");
    scanf("%lld%lld%lld",&a,&b,&c);
    for(i=1,d=1;i<=b;i++)
    d*=a;
    n=d%c;
    printf("a^bmodc=%d\n",n);
    return 0;


     }
    end_clock=clock();
    elapsed_time =(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
    printf("%.6lf",elapsed_time);
    return 0;
}
