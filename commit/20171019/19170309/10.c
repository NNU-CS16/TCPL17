#include<stdio.h>
#include<time.h>
int main()
{
  clock_t start_clock, end_clock;
  double elapsed_time;
 start_clock=clock();
 for(int i=1;i<=1000000000;++i);
 #include<stdio.h>
int main()
{

long long int a,b,c;
int n,x=1;
scanf("%lld %lld %lld", &a,&b,&c);

for(n=1;n<=b;n++)
   x=a*x;
printf("%lld\n", x%c);
return 0;
}

end_clock =clock();
elapsed_time =(double)(end_clock - start_clock)/ CLOCKS_PER_SEC;
printf("%.6lf\n", elapsed_time);
return 0;
}
