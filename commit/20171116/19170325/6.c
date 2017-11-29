#include <stdio.h>
#include <string.h>

void k_reverse(char* str, int k);

int main(void)
{
   char str[20];
   int k;

   printf("Please input something :\n");
   scanf("%s", str);
   printf("Please input k :\n");
   scanf("%d", &k);
   k_reverse(str, k);
   printf("%s\n", str);

   return 0;
}

void k_reverse(char* str, int k)
{
    int i, j, n = strlen(str), turn = 0;
    char temp = 0;

    while (n - k >= 0)
    {
       for (i = turn * k, j = turn * k + k - 1; i < j; i++, j--)
       {
          temp = str[i];
          str[i] = str[j];
          str[j] = temp;
       }
       n = n - k;
       turn++;
    }
}
