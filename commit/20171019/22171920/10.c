#include<stdio.h>
#include<time.h>
int main()
{
  clock_t start_clock, end_clock;
  double elappsed_time;

  stsrt_clock = clock();

  for(int i=1;1<=1000000000;++1);

  /*
   *// TODO:
   */

  end_clock = clock();

  elapsed_time = (double)(end_clock - start_clock)/CLOCKS_PER_SEC;
  printf("%.6lf",elapsed_time);
  return 0;
}
