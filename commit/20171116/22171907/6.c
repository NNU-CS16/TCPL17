#include <stdio.h>
#include <string.h>
void k_reverse(char* str,int k);
int main()
{
    char* str;
    int k;
    scanf("%s", str);
    scanf("%d", &k);
    k_reverse(str,k);

    return 0;
}
void k_reverse(char* str,int k)
{
    int len,n,m,i,j;
    len = strlen(str);
        for(m = 0; m < (len/k); m++)
        {
            for(i = (m*k),j = (m+1)*k-1;i <= j; i++,j--)
            {
                n = str[i];
                str[i] = str[j];
                str[j] = n;
             }
        }
    printf("%s",str);
}
