/*B1019.c_数字黑洞*/
#include <stdio.h>

void Bubble(int a[], int N)
{
	int i, j, temp;
	for (i = 0; i < N - 1; i++)
	{
		for(j = i + 1; j < N; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int n;
	int a[4] = {0};
    scanf("%d", &n);    
	do
	{  
		for (int i = 0; i < 4; ++i)
		{  
			a[i] = n % 10;
			n /= 10;
		}
		Bubble(a, 4);     //从小到大排序   
		int min = 0, max = 0;
		for (int i = 0; i < 4; ++i)
			min = 10 * min + a[i];
		for (int i = 3; i >= 0; --i)
			max = 10 * max + a[i];
		n = max - min;
		printf("%d - %d = %d\n", max, min, n);
	}while (n != 0 && n != 6174);
	return 0;  
}
