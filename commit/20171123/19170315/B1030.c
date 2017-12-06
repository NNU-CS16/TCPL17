  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  int cmp(const void* a, const void* b)
  {
      return *(double*) a >*(double*) b?1:-1;
  }
 
  int main()
  {
      int n, p;
      scanf("%d %d",&n,&p);
      double a[100000];
      int i, j;
      for (i = 0; i < n; i++)
      {
          scanf("%lf",&a[i]);
      }
      int max = 0;
      int count = 0;
      qsort(a, n, sizeof(a[0]), cmp);
      double temp;
      for (i = 0; i < n; i++)
      {
          temp = a[i] * p;
          for (j = count; j < n; j++)
          {
              if (a[j] > temp)
                  break;
              if (j - i + 1 > max)
                  max = j - i + 1;
          }
          count = j;
      }
      printf("%d\n",max) ;
      return 0;
  }
