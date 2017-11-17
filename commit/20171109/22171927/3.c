#include <stdio.h>
int step(int N);

int main()
{
	int N;
	int n;
	printf("Please input N(1<=N<=1000):");
	scanf("%d",&N);
    n=step(N) % 100007;
    printf("%d\n",n);
	return 0;
}

int step(int N)
{
	if(N==1||N==2)
		return 1;
	return step(N-1)+step(N-2);
}
		
			
