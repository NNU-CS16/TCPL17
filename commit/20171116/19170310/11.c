#include <stdio.h>
void my_strcpy(char* dest, const char* src) 
{
    int srclen = strlen(src);
      int i, j = 0;
    for (i = 0; i < srclen; i++)
            if (src[i] < '0' || src[i] > '9')
                  dest[j++] = src[i];
}
 
int main()
{
    char strSrc[200] = {'\0'};
      char strDest[200] = {'\0'};
     gets(strSrc);
    my_strcpy(strdest,strsrc);
    puts(strDest);
    return 0;
}

