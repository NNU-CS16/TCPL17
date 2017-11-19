#include <stdio.h>
#include <string.h>
int is_str_pal (const char* str);
int main()
{
    char a[10];
    scanf ("%s",a);
    printf ("%d\n",is_str_pal(a));
    return 0;
}


int is_str_pal (const char* str)
{
    char a[10];
    int i , j , flag;
    j = strlen(a);
    for (i = 0 ; i < j - 1 ; i++ , j--)
    {
      if (a[i] != a[j] )
       {
         flag = 0;
         break;
       }
      else
         flag = -1;
     }
    return flag;
}
