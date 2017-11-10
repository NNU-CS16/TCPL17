  #include <stdio.h>
  int fac_bit_count(int);
  int main()
  {
     int n;
     scanf("%d",&n);
     fac_bit_count(n);
     return 0;
  }

  int fac_bit_count(int n)
  {
     long int s = 1;
     do
     {
        s = s * n;
        n--;
     }while(n > 0);
     int i = 1;
     do 
     {
     s = s/10;
     i++;
     }while(s > 10);
     printf("%d\n",i);
  }

