#include<stdio.h>
#include<time.h>
#include<math.h>

int main()
{
    clock_t start_clock,end_clock;
    double elapsed_time;

    start_clock = clock();
    
    for (int i=1;i<=100000000;++i);
    
    int a,b,c,f;
    long long d;
    scanf("%d%d%d",&a,&b,&c);
          d=(int)pow(a,b);
          f=d%c;
    printf("%d\n",f);
    
    end_clock = clock();
   
    elapsed_time = (double)(end_clock - start_clock);
    printf("%.6lf",elapsed_time);
    return 0;
}
