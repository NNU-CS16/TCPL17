 #include <stdio.h>
 #include <math.h>
 int main()
{
	int n,An;
	printf("please input n: ");
	scanf("%d", &n);
	An = (pow(2, n) - 1)*2;
	printf("%d\n", An);
	return 0;
}
