    #include <stdio.h>
    #include <string.h>
    int is_str_pal (const char* str);
    int main()
    {
        char a[20];
        gets (a);
        printf ("%d", is_str_pal(a));
        return 0;
    }
    int is_str_pal(const char* str)
    {
        char i,j;
    int flag = 0;
    for (i = 0, j = strlen(str)-1; j > i; i++, j--)
     
    if (str[i] != str[j])
        {
            flag = -1;
             break;
         }
    return flag;
    }
