#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);
int main()
{
    char str[100];
    int k;
    printf("请输入字符串:\n");
    gets(str);
    printf("请输入k:\n");
    scanf("%d", &k);
    k_reverse(str, k);
    return 0;
}   
void k_reverse(char* str, int k)
{
    int a, i, j, len, temp;
    len = strlen(str);
    a = len/k;
    for(i = 0; i < a; i++)
    {
        for(j = i * k; j - i * k < k/2;j++) 
        {
           temp = str[j];
           str[j] = str[2 * i * k + k - 1 - j];
           str[2 * i * k + k - 1 - j] = temp;
        }
    }
    puts(str);
}
