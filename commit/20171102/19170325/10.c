#include <stdio.h>
#include <string.h>

int is_str_pal(char *str);

int main(void)
{
   int a;
   char str[20];

   printf("please input something:\n");
   scanf("%s", str);
   a=is_str_pal(str);
   printf("%d\n", a);

   return 0;
}

int is_str_pal(char *str)
{
   int i, j, flag = 0;

   for (i = 0,j = strlen(str)-1; i < j; i++, j--)
   {
      if (str[i] != str[j])
        {
           flag = 1;
           break;
        }
   }
   if (flag == 1)  return -1;
    else return 0;
}
