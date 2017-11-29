#include<stdio.h>
#include<string.h>
void k_reverse(char* str, int k)
{
    char *p = str;
    char *q = str + k - 1;
    while (p < q)
    {
        int t = *p;
        *p = *q;
        *q = t;
        p++;
        q--;
    }        
}

int main()
{
    int n;
    printf("请输入一串字符和一个n;\n");
    scanf("%d",&n);
    char str[10];
    fgets(str, 11, stdin);
    k_reverse(str, n);
    printf("%s\n",str);
    return 0;
}

