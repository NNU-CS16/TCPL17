  #include <stdio.h>
  #include <math.h>
  int is_prime(int);
  int main()
  {
     int n = 0;
     int num = 0;
     do
     {
         if(is_prime(n) == 0)
         {
             num++;
         }
         if(num >= 100 && num <= 1000)
         {
             printf("%d",n);
         }
         n++;
    }while(num <= 1000);
    return 0;
  }

  int is_prime(int n)
  {
     int i;
     for(i = 2; i <= sqrt(n); i++)
     {
          if(n % i == 0)
          {
              return -1;
          }
     }
     return 0;
  }
