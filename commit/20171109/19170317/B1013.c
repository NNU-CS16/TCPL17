#include <stdio.h>
#include <math.h>

int main()
{
	int Pi = 2, M, N;
	int i = 0, k;
	int str[10001], n = 0, m;
	int flag;
	scanf("%d%d", &M, &N);
	do
	{
	  flag = 0;
	  for (k = 2; k <= sqrt(Pi); ++k)
      {
        if (Pi % k == 0)
		{
		  flag = -1;
		  break;
		}
      }
	  if (flag == 0)
	  {
		++i;
		if (i >= M && i <= N)
		{
		  str[n] = Pi;
		  ++n;
		}
	  }
	  Pi += 1;
	} while (i <= N);
	for (n = 0; n <= N - M; ++n)
	{
      if(n % 10 != 9)
		printf("%d ", str[n]);
	  else
		printf("%d\n", str[n]);
	}
	return 0;
}
