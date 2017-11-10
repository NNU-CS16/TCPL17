 #include <stdio.h>
 int is_pow2(int n);

 int main()
{
    int a, b;
    scanf("%d", &a);
    b = is_pow2(a);
  
    printf("%d\n", b);
    if (b == 0)
		printf("is\n");
    if (b == -1)
    	printf("not\n"); 
  
	return 0;
}

 int is_pow2(int n)
{
	if (n & (n-1) == 0)
	return 0;
	if (n & (n-1) != 0)
	return -1;
}
