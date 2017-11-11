#include <stdio.h>
#include <string.h>
int is_int_pal(const char *str);

int main()
{
   char c[100];
   char *str = NULL;
   scanf("%s",c);
   str = c;
   int flag = is_int_pal(str);
   printf("%d\n", flag);
   return 0;
}
int is_int_pal(const char *str)
{
   int flag, c[100];
   int len = strlen(str);
   if (len % 2 != 0)
   {
       int i = 0;
       while (i != (len + 1) / 2)
       {
              if (str[i] == str[len - 1 - i])
                  i++;
              else break;
       }
       if ( i < (len + 1) / 2)
            flag = -1;
       else flag = 0;
   }
   else flag = -1;
   return flag;
}
