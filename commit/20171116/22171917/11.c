#include <stdio.h>
void my_strcpy(char* dest, const char* src);

int main()
{
   char dest[100], src[100];
   scanf("%s", src);
   my_strcpy(dest, src);
   printf("%s\n", dest);
   return 0;
}

void my_strcpy(char* dest, const char* src)
{
  int i;
  for ( i=0; src[i] != '\0'; i++)
  {
    dest[i] = src[i];
  }
  dest[i] = src[i];
}


