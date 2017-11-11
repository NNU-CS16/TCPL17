#include <stdio.h>
#include <string.h>
void reverse(char*str)
{
    int len=strlen(str);
    int i,n=len/2;
    char temp;
    for(i=0;i<=n;i++)
    {
        tem=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return str;
}
 int main()
{
    char str[100];
    printf("input a string :");
    gets(str);
    puts(reverse(str));
    return 0;
}



