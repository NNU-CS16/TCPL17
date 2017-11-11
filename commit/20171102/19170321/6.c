#include <stdio.h>
    #include <math.h>
    int is_prime(int n);
    int main()
    {
        int n = 2,num = 0;
        while(1)
        {
            if(is_prime(n) == 0)
            {
                num++;
                if(num >= 100 && num <= 1000)
                    printf("%d ", n);
             }
            n++;
            if(num == 1000)
            break;
        }
      return 0;
     }
int is_prime(int n)
{
  int i;
  for (i = 2;i <= sqrt(n);i++)
  if (n % i == 0)
  return -1;
  return 0;
} 

