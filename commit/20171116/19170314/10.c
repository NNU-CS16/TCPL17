#include<stdio.h>
int my_strlen(const char* str)
{
        int len = 0;
        while ( *str != '\0' )
        {
                len++;
                str++;
        }

        return len;

}
int main()
{
    char *str;
   
    fgets(str,1000,stdin); 
    
    printf("%d",my_strlen(str));
    return 0;
}
