#include <stdio.h>/*实现高精度加法*/
#include <string.h>
#include <math.h>

int main()
{
	char S[10000];
	int A[1000], B[1000];
	int C[10000];
	while(1)
	{
		int i, j, k;
		int lena, lenb, lenc;
		scanf("%s", S);
		lena = strlen(S);
		for(i = 0; i < lena; i++) A[i + 1] = S[lena - i - 1] - '0';
		scanf("%s", S);
		lenb = strlen(S);
		for(j = 0; j < lenb; j++) B[j + 1] = S[lenb - j - 1] - '0';
		lenc = lena > lenb ? lena : lenb;
		for(k = 1; k <= lenc; k++) {C[k] = A[k] + B[k];}
		for(k = 1; k < lenc; k++)
		{
			if(C[k] >= 10)
			{
				C[k + 1]++;
				C[k] -= 10;
			}
		}
		for(k = lenc; k > 0; k--) printf("%d", C[k]);
		printf("\n");
		return 0;
	}
}
