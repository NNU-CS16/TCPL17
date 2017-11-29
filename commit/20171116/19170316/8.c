#include<stdio.h>

int main()
{
int N;int a=1;
scanf("%d",&N);
int arr[N][N];
for(int q=0;q<(N+1)/2;q++)
{
	for(int w=q;w<=N-q-1;w++)
		arr[q][w]=a++;
	for(int i=q+1;i<N-q-1;i++)
		arr[i][N-q-1]=a++;
	for(int e=N-q-1;e>q;e--)
		arr[N-q-1][e]=a++;
	for(int i=N-q-1;i>q;i--)
		arr[i][q]=a++;
}
for(int s=0;s<N;s++)
{
	for(int k=0;k<N;k++)
		printf("%3d",arr[s][k]);
		printf("\n");
}
return 0;
}
