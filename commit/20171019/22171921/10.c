#include<stdio.h>
#include<math.h>
#include<time.h>
int pow_mod(int a,int b,int c)
{
int i,j;
i=pow(a,b);
j=i&(c-1);
return j;
}
int main()
{
    clock_t start_clock, end_clock;
    double elapsed_time;
    start_clock = clock();
    for (int i=1;i<=1000000000;i++)
{
    int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%d\n",pow_mod(a,b,c));
  return 0;
}
    end_clock = clock();

    elapsed_time = (double)(end_clock - start_clock) / CLOCKS_PER_SEC;
    printf("%.61f",elapsed_time);
    return 0;
}
