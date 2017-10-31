#include<stdio.h>
#include<time.h>
#include<math.h>
int main( )
{
clock_t start_clock,end_clock;
double elapsed_time;

start_clock=clock( );
for(int i=1;i<=1000000000;++i);
 int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
d=pow(a,b);
printf("%d",d%c);
end_clock=clock( );
elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
printf("%.61f",elapsed_time);
return 0;
}




