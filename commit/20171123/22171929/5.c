#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr);

int main()
{
    char str[20];
    char sub[10];
    scanf("%s",str);
    scanf("%s",sub);
    int p;
    p = substr(str,sub);
    if (p  == -1)
    printf("bu han zi zi fu chuan");
    else printf("%d",p);
    return 0;
}
int substr(const char* str, const char* substr)
{
    int i,y,j,m,n,x;
    n = strlen(str);
    m = strlen(substr);
    for (i = 0; i < n; i++)
    {
        if (str[i] == substr[0])
        break;
    }
    if (i == n)
        return -1;
    else
    {
        x = i;
        j = 0;
        while (str[i] == substr[j])
        {
            i++;
            j++;
        }
        y = x + j - 1;
        if ((i - 1) == y)
        return x;
        else return -1;
     }
}
