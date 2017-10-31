#include<stdio.h>
#include<time.h>
int main()
{
clock_t start_clock,end_clock;
double elapsed_time;
start_clock= clock();
for (int i=1;i<=100000;i++)
	{
	long long unsigned int a=876,b=32,c=76,j;
	long long unsigned int temp[c],keyone,raw;temp[0]=a%c;
	for(j=1;j<b;j++)
	{
	temp[j]=(temp[j-1]*a)%c;
	if (temp[j]==temp[0]) 
	break;
	}
	keyone=b%j;
	if (keyone==0)keyone=j-1;
	else keyone--;
	printf("mod=%llu\t%d\n",temp[keyone],i);
	}
end_clock=clock();
elapsed_time =(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
printf("%.6lf",elapsed_time);
return 0;
}
