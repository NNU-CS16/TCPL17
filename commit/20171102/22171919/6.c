  #include <stdio.h>
  #include <math.h>
  int is_prime(int n);

  int main()
  {
      int t = 0,n = 2;
      while(t < 1000)
      {
		  if (is_prime(n) == 0)
		  {
		  t++;
		  if ( t >= 100 )
		  {
		
			  printf("%d\n",n);
		  }
		  }
		  n++;
	  }

    return 0;
  }
 
  int is_prime(int n)
  {
      int i;
      for(i = 2;i <= sqrt(n);i++)
      {
	  if(n % i == 0)
              break;
      }

      if(i <= sqrt(n))
      return -1;
      else  return 0;
  }
