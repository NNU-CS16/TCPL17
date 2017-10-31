#include <stdio.h>
#include <stdlib.h>
void round(int a[], int N)
{
int i, b;
b = a[N-1];
for(i = N - 2; i >= 0; i--)
{
a[i+1] = a[i]; 
}
a[0] = b;
}
void array(int a[], int N)
{
int i;
for(i = 0; i < N; i++)
{
printf(i == N-1 ? "%d" : "%d ", a[i]);
}} 
int main()
{
int A[100];
int i, N, M;
scanf("%d %d", &N, &M);
for(i = 0; i < N; i++)
scanf("%d", &A[i]);
for(i = 0; i < M; i++)
{
round(A, N);
}
array(A, N);
return 0;
}
