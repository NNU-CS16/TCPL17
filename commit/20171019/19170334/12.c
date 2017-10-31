#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 100000
int main()
{
	printf("Please input the number of N:");
	int N;
	scanf("%d",&N);
	int arr[n];
	int i;
	int a,b;
	int Max,Min;
	for(i=1;i<=N;i++){
	arr[i]=rand()%N+1;}
        Max=arr[1];
	for(i=2;i<=N;i++){
        if(arr[i]>Max){Max=arr[i];a=i;}}
        printf("%d\n",a);   
        Min=arr[1];
        for(i=2;i<=N;i++){
        if(arr[i]<Min){Min=arr[i];b=i;}}
        printf("%d\n",b);
	int s=0;
	for(i=1;i<=N;i++){
        s+=arr[i];}
	printf("%d\n",s);
	float x;
	x=(s/N);
	printf("%.2f\n",x);
	float m=0;
	for(i=1;i<=N;i++){
	m+=pow((arr[i]-x),2);}
	printf("%.2f\n",m);
	float y;
	y=sqrt(m);
	printf("%.2f\n",y);
	return 0;

}
