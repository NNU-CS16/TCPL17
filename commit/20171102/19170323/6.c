 #include <stdio.h>
 #include <math.h>
 int is_prime(int n)
{
	int i;

	if (n == 2)
	return 0;
 
	if (n > 2)
   {
	for (i = 2; i < sqrt(n); i++)
	if (n%i == 0)
		break;
	if (i < sqrt(n))
        return -1;
    else 
    return 0;
   }
  
}

 int main()
{
	int a, count = 0, b, i = 2, m;
	scanf("%d", &a);
	b = is_prime(a);
	printf("%d\n", b);
	do
   { 
     m = is_prime(i);
     if (m == 0)
	{ count++;
      if (count >= 100)
    {printf("%d ", i);}
    }
		i++;
   }while (count < 1000);
  
	printf("\n");
	return 0;
}
