#include <stdio.h>

int my_strlen(const char* str);

int main(void)
{
   char str[100] = {0};

   printf("Please input something :\n");
   scanf("%s", str);
   printf("%d\n", my_strlen(str));

   return 0;
}

int my_strlen(const char* str)
{
   int i;

   for (i = 0; i < 100; i++)
      if (str[i] == '\0')
         break;
   return i;

}
