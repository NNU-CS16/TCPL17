#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clock,end_clock;
    double elapsed_time;

    start_clock = clock();

    for (int i=1;i<=1000000000;++i);
    {
      int a,b,c,i,r;

      printf("请输入整数a b c：");
      scanf("%d%d%d",&a,&b,&c);
      for(i=1;i<=b;i++)
         a=a*a;
      r=a%c;

      printf("a的b次方取余c=%d\n",r);
    }                                                               //亲测，尝试调用、换了r的算法，发现原来写的2.c更快
    end_clock=clock();

    elapsed_time=(double)(end_clock - start_clock)/CLOCKS_PER_SEC;
    printf("%.6lf\n",elapsed_time);

    return 0;
}


