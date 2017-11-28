#include <stdio.h>
#include <string.h>
int main()
{
	char A[1000];
	char B[1000];
	int lenA;
	int lenB;
	int m,n,s,i,j;
	int k = 0;
	int C[1001];
	printf("Please input A:");
	scanf("%s",A);
	printf("Please input B:");
	scanf("%s",B);
	lenA = strlen(A);
	lenB = strlen(B);
	for (i = lenA - 1,j = lenB - 1; i >= 0,j >=0; i--,j--)
	{
		s = (A[i] - '0' + B[j] - '0') + m;
		m = s/10;
		n = s%10;
		C[k++] = n;	
	}
	while (i >= 0)
	{
		int s = (A[i] - '0') + m;
		m = s/10;
		n = s%10;
		C[k++] = n;
		i--;
	}
	while (j >= 0)
	{
		int s = (B[j] - '0') +m;
		m = s/10;
		n = s%10;
		C[k++] = n;
		j--;
	}	
	if (m)
	{
		C[k++] = m;
	}
	for (int i = k - 1; i >= 0; i--)
	{
		printf("%d",C[i]);
	}
	printf("\n");
	return 0;
}

