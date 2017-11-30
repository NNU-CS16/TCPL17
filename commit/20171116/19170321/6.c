   #include <stdio.h>
    #include <string.h>
    void k_reverse(char* str, int k);
    int main()
    {
         char a[20];
         int k;
         printf ("input k:");
         scanf ("%d", &k);
         printf ("input string:");
         scanf ("%s",a);
         k_reverse(a, k);
         printf ("%s\n", a);
         return 0;
     }
     void k_reverse(char* str, int k)
    {
      int i, j, m, len, temp;
      len = strlen(str);
      for (i = 0; i < len / k; i++)
          for (j = k * i, m = k * i + k - 1; j < m; j++, m--)
          {
              temp = str[j];
              str[j] = str[m];
              str[m] = temp;
          }
    }  
