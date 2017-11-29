#include <stdio.h>
int mystrlen(const char* str);

int main()
{
        char str[100];
        scanf("%s",str);
        printf("%d\n",mystrlen(str));
        return 0;
}

int mystrlen(const char* str)
{
        int i=0;
        while(str[i]!='\0')
        {
                i++;}
        return i;
}

