#include <stdio.h>
#include <string.h>

int main()
{
	char a[1001], b[1001];
	int A[1001], B[1001], S[1001];
	int lenA, lenB;
	int i, j, t, k = 0;
	printf("输入两个正整数:");
	scanf("%s%s", a, b);
	lenA = strlen(a);
	lenB = strlen(b);
	for (i = 0; i < lenA; ++i)
	  A[i] = a[i] - 48;
	for (j = 0; j < lenB; ++j)
	  B[j] = b[j] - 48;
	while (i >= 0 && j >= 0)
	{
	  S[k] = A[i] + B[j];
	  ++k;
	  --i;
	  --j;
	}
	if (i >= 0)
	  while (i >= 0)
	  {
		S[k] = A[i];
		++k;
		--i;
	  }
	else if (j >= 0)
	  while (j >= 0)
		{
		  S[k] = B[j];
		  ++k;
		  --j;
		}
	for (t = 1; t < k; ++t)
	  if (S[t] >= 10)
	  {
		S[t] = S[t] - 10;
		S[t+1] = S[t+1] + 1;
	  }
	while (S[k] == 0)
	  --k;
	for (t = k; t > 0; --t)
	  printf("%d", S[t]);
	printf("\n");
	return 0;
}
