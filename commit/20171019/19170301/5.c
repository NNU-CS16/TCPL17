#include<stdio.h>  
int main()  
{  
    char ch;  
    int count = 0, flag = 0;  
    for (scanf("%c", &ch); ch != '.'; scanf("%c", &ch))  
    {  
        if (ch != ' ')  
        {  
            count++;  
        }  
        if (count != 0 && ch == ' ')  
        {  
            if (flag == 1)  
            {  
                printf(" ");  
            }  
            printf("%d", count);  
            count = 0;  
            flag = 1;  
        }  
    }  
    if (count != 0)  
    {  
        if (flag == 1)  
        {  
            printf(" ");  
        }  
        printf("%d\n", count);  
    }  
    return 0;  
}  
