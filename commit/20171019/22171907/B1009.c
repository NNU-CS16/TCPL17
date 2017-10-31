#include<stdio.h>  
  
int main()  
{  
    char str[40][80] = {0};            //定义二维数组   
    int i, j;                        //定义自变量   
    int out = 0;  
    int cnt = 0;  
    //为二维数组填充字符串   
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
       
    //输出字符   
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
