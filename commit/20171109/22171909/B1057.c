 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
   int a, b, i = 0, j = 0, sum, len1, len2;
   char N1[100000];
   char N2[100000];
   gets(N1);
   sum = 0;
   len1 = strlen(N1);
   for (a = 0; a < len1; ++a)
      sum = sum + N1[a] - 'a' + 1;
   if (sum == 0)
     printf("1 0\n");
   for (b = 0; sum != 0; ++b)
   {
      N2[b] = sum % 2;
      sum /= 2;
   }
   len2 = strlen(N2);
   for (b = 0; b < len2; ++b)
   {
      if (N2[b] == 0)
          ++i;
      else if (N2[b] == 1)
          ++j;
   }
   printf("%d %d\n", i, j);
   return 0;
 }
