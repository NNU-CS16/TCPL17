  #include <stdio.h>
  int count1_in_bin(int n)
  {
      int i = 0, b;
    while (n!=0)
    {
        b = n%2;
        if (b == 0)
            i++;
        n =n/2;
    }
    printf ("%d\n", i);
    }
   int main( )
    {
       int n;
       scanf ("%d", &n);
       count1_in_bin(n);
       return 0;
    }
    




