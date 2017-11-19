 #include <stdio.h>

 void sort(int str[], int n)
{
	int i, j, temp;
	for (i = 0; i<n; i++)
		for(j = 0; j < n-1; j++)
			if (str[j] > str[j+1])
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
}
 void reverse(int str[], int n)
{
	int i, temp;
	for (i = 0; i<n/2; i++)
	{
		temp = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = temp; 
	}
}

 int main()
{
	int N, sum1 = 0, sum2 = 0, n = 1, i = 0, j, str[4], x = 0, y = 0;
	scanf("%d", &N);//N<10000
	do
	{
		int temp = N;
		while(N != 0)
		{	
			str[i] = N%10;
			N = N/10;
			i++;
		}
			i = 0;
		if (str[0]==str[1] && str[1]==str[2] && str[2]==str[3])
		{	
			printf("%d - %d = 0000\n", temp, temp);
			break;
		}
		sort(str, 4);
		for (j = 0; j < 4; j++)
		{
			x += str[j]*n;
			n *=10;
		}
			n = 1;
		reverse(str, 4);
		for (j = 0; j < 4; j++)
		{
			y += str[j]*n;
			n *=10;
		}
			n = 1;
		N = x-y;
		printf("%d - %d = %d\n", x, y, N);
		x = 0;
		y = 0;
	}while(N != 6174);
		return 0;
}
