#include <stdio.h>
int my_strlen(const char* str);

int main()
{
    char str[100];
    scanf("%s",str);
    my_strlen(str);
    return 0;
}

int my_strlen(const char* str)
{
    int i = 0,j = 0;
    for (i = 0; ; i++)
    { 
        if (str[i]!='\0')
        j++;
	if (str[i] == '\0')
	break;
    }
    printf("长度为%d\n",j);
    return 0;
}
