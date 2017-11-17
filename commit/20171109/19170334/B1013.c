#include <stdio.h>
#include <math.h>

int main()
{
  	int M,N;
  	scanf("%d%d",&M,&N);
	int S[10000];
  	int s;
  	int i;
  	int j = 1;
  	int k = 1;
  	S[1] = 2;
	for(s = 3; s <= 1000; s++)
	{
  		for(i = 2; i < s; i++)
        	{
          		if(s % i == 0) {j = 0;}
        	}
		if(j == 1) {k++; S[k] = s;}
		j = 1;
  	}
  	for(k = M; k <= N; k++)
 	{	
    		if(k == M) printf("%d",S[k]);
    		else if((k - M + 1) % 10 == 1 && k != (M + 1)) printf("\n%d",S[k]);
    		else printf(" %d",S[k]);
  	}
  	return 0;
}
