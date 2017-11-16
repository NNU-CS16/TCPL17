  #include<stdio.h>
  #include<math.h>
  int is_prime(int n);
  
  int n;
  int main()
  {
	int cnt =0; 
	for (n = 2;cnt<1000 ;n++)
	{
		 is_prime(n);
	if (is_prime(n) == 0)
		{
		cnt++;
		}
	if (cnt>=100 && cnt<=1000)
		{
		printf("%d ", n);
		}
	}
	printf("\n");
	return 0;
  }

 int is_prime(int n)
 {
	int t;
	for (t = 2;t <= sqrt(n);t++)
	{
		if (n%t == 0)
			break;
	}
	if (t <= sqrt(n))
		return -1;
	else
		return 0;
 }
