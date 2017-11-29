#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);

int main()
{
   char str[50];
   int k;
   scanf("%d%s", &k, str);
   k_reverse(str,k);
   printf("%s\n", str);
   return 0;
}

void k_reverse(char* str,int k)
{
   int len, temp, i, j, b = k;
   len = strlen(str);
   for ( i = 0; k < len; i = i+k, b = b+k )
    for ( j = 0; j < (k/2); j++)
    {
       temp = str[i+j];
       str[i+j] = str[b-j-1];
       str[b-j-1] = temp;
    }
}
