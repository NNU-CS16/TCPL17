#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int N,i,b,k;
	int a=0;
        long long int sum=0;
	int j=100000;
	int arr[100000];
	float p,ss,s;
	float m=0;
	
	scanf("%d",&N);
	srand(time(NULL));
	for(i=0;i<N;i++)
	   arr[i]=rand()%N;
	for(i=N-1;i>=0;i--)
	   {
	     if(arr[i]>=a)
	       {
		  a=arr[i];
		  b=i;
	       }
	     if(arr[i]<=j)
	       {
		  j=arr[i];
		  k=i;
	       }
	   }
	printf("zui da zhi:%d xia biao:%d\n",a,b);
	printf("zui xiao zhi:%d xia biao:%d\n",j,k);
	for(i=0;i<N;i++)
	   sum=sum+arr[i];
	p=sum/N;
	for(i=0;i<N;i++)
	   m=m+(arr[i]-p)*(arr[i]-p);
	ss=m/N;
	s=sqrt(ss);
	
	printf("sum:%lld average:%.2f fang cha:%.2f biao zhun cha:%.2f\n",sum,p,ss,s);
	return 0;
}
