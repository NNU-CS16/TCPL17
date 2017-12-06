#include <stdio.h>
#include <string.h>

int Substr(const char* str,const char* substr)
{
    int len1=strlen(str);
    int len2=strlen(substr);
    int i,j;
    for (i=0;i<=len1-len2;i++)
    {
         for (j=0;j<len2;j++)
         {
              if (str[i+j]==substr[j])
                  continue;
              else 
                  break;
          }
          if (j==len2)
              return i;
     }
     return -1;       
}

int main()
{
    char str[20],substr[15];
    scanf("%s%s",str,substr);
    printf("%d\n",Substr(str,substr));
    return 0;
}
