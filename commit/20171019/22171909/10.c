#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
int a,b,c,d;
clock_t start_clock,end_clock;
double elapsed_time;
start_clock=clock();
for(int i=2;i<=1000000000;i++)
scanf("%d %d %d",&a,&b,&c);
d=pow(a,b);
printf("%d\n",d%c);
end_clock=clock();
elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
printf("%.61f",elapsed_time);
return 0;
}

