 #include <stdio.h>
 void M(char s, char t);
 void H(int n, char s, char h, char t);

 int main()
{
	int N,sum = 2,i = 1;
	scanf("%d", &N);
	while (i < N)
	{
		sum = sum*3+2;
		i++;
	}
	printf("%d\n", sum);
	H(N, 'A', 'B', 'C');
	return 0;
}

 void M(char s, char t)
{
	printf("%c -> %c\n", s, t);
}

 void H(int n, char s, char h, char t)
{
	if (n == 1)
	 {
		M(s, h);
		M(h, t);
     }
	else
	{
		H(n-1, s, h, t);
		M(s, h);
		H(n-1, t, s, h);
		M(h, t);
		H(n-1, s, h, t);
	}
}
