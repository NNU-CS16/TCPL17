#include <stdio.h>
#include <string.h>

int main(void)
{
   int arr[26] = {0}, k, max = 0, temp;
   char str[1000] = {0};

   printf("Please input something :\n");
   fgets(str, 999, stdin);
   for (int i = 0; i < strlen(str); i++)
   if (str[i] >= 'a' && str[i] <= 'z')
       {
          k = (int)str[i] - 97;
          arr[k]++;
       }
   else if (str[i] >= 'A' && str[i] <= 'Z')
       {
          k = (int)str[i] - 65;
          arr[k]++;
       }
   for (int i = 0; i < 26; i++)
       if (arr[i] > max)
          {
             max = arr[i];
             temp = i;
          }
   
   printf("%c %d\n", temp + 97, max);

   return 0;
}
