  #include <stdio.h>
  #include <string.h>

  int main()
  {
      char a[1000] = {0};
      char b[1000] = {0};
      char c[3000] = {0};
      scanf("%s %s",a,b);
      int len_a = strlen(a);
      int len_b = strlen(b);
      int i, j, p, k = 0, r = 0;
      for (i = len_a - 1, j = len_b - 1;i >= 0,j >= 0; i--,j--)
      {
          p = (a[i] - '0') + (b[j] - '0') + r;
          r = p / 10;
          c[k++] = p % 10;
      }
      while (i >= 0)
      {
          p = (a[i] - '0') + r;
          r = p / 10;
          c[k++] = p % 10;
          i--;
      }
      while (j >= 0)
      {
          p = (b[j] - '0') + r;
          r = p / 10;
          c[k++] = p % 10;
          j--;
      }
      if (r)
      {
          c[k++] = r;
      }
      for (i = k - 1; i >= 0; i--)
      {
          printf("%d",c[i]);
      }
      printf("\n");
      return 0;
  }
