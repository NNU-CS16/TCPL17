#include <stdio.h>
#include <string.h>
void k_reverse(char* str,int k)
{
    int i,j;
    char help;
    i = 0,j = 0;
    for ( ;i < strlen(str);i += k)
    {
        if (i + k > strlen(str))
            break;
        for (j = 0;j < k / 2;j++)
        {
            help = str[i + j];
            str[i + j] = str[i + k - 1 - j];
            str[i + k -1 - j] = help;
        }
    }
    puts(str);
}
int main()
{
    int k;
    char str[20];
    scanf("%d",&k);
    scanf("%s",str);
    k_reverse(str,k);
    return 0;
}
