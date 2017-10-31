#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
    clock_t start_clock, end_clock;
    double elapsed_time;

    start_clock = clock();

    for (int i=1;i<=1000000000;)

    long int a,b,c,x,y;
  
  printf("输入a,b,c:");
  scanf("%ld,%ld,%ld",&a,&b,&c);
  
  x=pow(a,b);
  y=x%c;
 
  printf("%ld\n",y);

    end_clock = clock();

    elapsed_time = (double)(end_clock - start_clock) / CLOCKS_PER_SEC;
    printf("%.61f",elapsed_time);
    return 0;
}
