#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);

int main()
{
   char str[30];
   int k;
   scanf("%d", &k);
   scanf("%s", str);
   k_reverse(str, k);
   return 0;
}

void k_reverse(char* str, int k)
{
    int len, j, temp, i;
    len = strlen(str);
    for (i = 0; len - i >=k; i = i + 3)
    {
         temp = str[i];
         str[i] = str[i+k-1];
         str[i+k-1] = temp;
    }
    for (j = 0; j < len; j++)
         printf("%c", str[j]);
}

