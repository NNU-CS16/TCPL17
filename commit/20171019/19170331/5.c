#include<stdio.h>  
int main()  
{  
    char c;  
    int count[100] = { 0 };  
    int a = 1;  
    int flag = 0;  
    int i = 0;  
    scanf("%c", &c);  
    while (c != '.')  
    {  
        if (c == ' ')  
        {  
            if (a == 0)  
            {  
                if (i == 0)  
                    printf("%d", count[i]);  
                else  
                    printf(" %d", count[i]);  
                a = 1;  
                i++;  
            }  
        }  
        else if (c != ' '&&c != '.')  
        {  
            count[i]++;  
            a = 0;  
        }  
        scanf("%c", &c);  
        flag = 1;  
    }  
    if (flag == 1 && i == 0)
        printf("%d", count[i]);  
    else if (flag == 1 && i != 0&&count[i]!=0) 
        printf(" %d", count[i]); 
    return 0;  
}  
