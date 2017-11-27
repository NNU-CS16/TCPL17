#include <stdio.h>
void my_strcmp(const char *str1,const char *str2)
{
    while (*str1 && *str2)
    {
            if (*str1 > *str2)
                return 1;
            else if (*str1 < *str2)
                return -1;
            else
                {str1++; str2++;}
    }
    if (*str1==0 && *str2==0)
        return 0;
    else if (*str1==0)
        return -1;
    else
        return 1;
} 
int main()
{
  my_strcmp;
  return 0;
}
 
