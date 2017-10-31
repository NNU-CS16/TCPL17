#include<stdio.h>  
int main()  
{  
    char str[40][80] = {0};
    int i, j;  
    int out = 0;  
    int cnt = 0;  
    for (i = 0; i < 40; i++)  
    {  
        for (j = 0; j < 80; j++)  
        {  
            scanf("%c", &str[i][j]);  
            if (' ' == str[i][j])  
            {  
                str[i][j] = '\0';  
                cnt++;  
                break;  
            }  
            if ('\n' == str[i][j])  
            {  
                str[i][j] = '\0';  
                out = 1;   
                break;  
            }      
        }  
        if (out)  
            break;  
    }      
       
   
    while (cnt >= 0)  
    {  
        if (cnt > 0)  
            printf("%s ", str[cnt]);  
        else  
            printf("%s", str[cnt]);      
        cnt--;      
    }  
    printf("\n");  
       
    return 0;  
}  
