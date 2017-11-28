  #include <stdio.h>
  #include <string.h>
  void k_reverse(char *str, int k);
  
  int main()
  {
      char str[1001];
      scanf("%s",str);
      char *pa = str;
      int k;
      scanf("%d",&k);
      k_reverse(pa, k);
      return 0;
  }

  void k_reverse(char *str, int k)
  {
      
      int len = strlen(str);
      int a = len / k;
      int i, j;
      for (j = 0;j < a; j++)
      {
          for (i = k - 1; i >= 0; i--)
          {
              printf("%c",str[j * k + i]);
          }
      }
      int b = len % k;
      for (i = 0; i < b; i++)
      {
          printf("%c",str[a * k + i]);
      }
      printf("\n");
  }
      
