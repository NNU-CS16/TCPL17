  #include <stdio.h>
  int GCD_recursive(int,int);
  int GCD_iterative(int,int);
  int min(int,int);

  int main()
  {
     int a, b;
     scanf("%d%d",&a,&b);
     int x = GCD_recursive(a,b);
     printf("%d\n",x);
     int m, n;
     scanf("%d%d",&m,&n);
     int y = GCD_iterative(m,n);
     printf("%d\n",y);
     return 0;
  }

  int GCD_recursive(int a,int b)
  {
     if(b == 0)
         return a;
     return GCD_recursive(b,a % b);
  }

  int GCD_iterative(int m,int n)
  {
     int x = min(m,n);
     int i;
     for(i = x;i >= 1; i--)
     {
         if(m % i == 0 && n % i == 0) break;
     }
     return i;
  }

  int min(int m,int n)
  {
     if(m < n)
     {
         return m;
     }
     return n;
  }

