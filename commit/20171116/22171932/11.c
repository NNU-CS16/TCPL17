#include <stdio.h>
#include <string.h>
void my_strcpy(char* dest, const char* src);
int main()
{
   char str1[20] = " C Language ";
   char str2[20];

   my_strcpy(str2, str1);
   puts(str2);

   return 0;
}
void my_strcpy(char* dest, const char* src)
{
   int i = 0, j = 0;
   while((dest != NULL) && (src != NULL))
     break;
   while (src[j] != '\0')
   {
        dest[i] = src[j];
        i++;
        j++;
   }
   printf("%s", dest);        
}
