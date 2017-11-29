#include <stdio.h>
int main()
{
   int k, i, j, b, e;
   scanf("%d", &k);
   char str1[100], str3[100], a, c, d, f;
   char str2[100];

   for (i = 0; i < k; i++)
        scanf("%s %s %s", str1, str3, str2);

   for (i = 0; i < k - 1; i++)
        for (j = 0; j < k - 1 - i; j++)
             if (str2[j] < str2[j+1])
             {
                 b = str2[j];
                 a = str1[j];
                 c = str3[j];
                 str2[j] = str2[j+1];
                 str1[j] = str1[j+1];
                 str3[j] = str3[j+1];
                 str2[j+1] = b;
                 str1[j+1] = a;
                 str3[j+1] = c;
             }
   for (i = 0; i < k; i++)
        printf("%c %c\n", str1[i], str3[j]); 
   for (i = 0; i < k - 1; i++)
        for (j = 0; j < k - 1 - i; j++)
             if (str2[j] > str2[j+1])
             {
                 e = str2[j];
                 d = str1[j];
                 f = str3[j];
                 str2[j] = str2[j+1];
                 str1[j] = str1[j+1];
                 str3[j] = str3[j+1];
                 str2[j+1] = e;
                 str1[j+1] = d;
                 str3[j+1] = f;
             }
   for (i = 0; i < k; i++)
        printf("%c %c\n", str1[i], str3[i]);
   return 0;
}

