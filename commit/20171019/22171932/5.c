#include<stdio.h> 

int main ()
{
    int a = 0, b = 0;
    printf("请输入一段文本：");
    char n;
    while((n = getchar()) != '.') 
    {
        if (n != ' ')
        {
            if (a > 0 && b > 0)
            { 
                printf("%d ", a);
                a = 0;
            }
            a++;
            b = 0;  
            continue;   
        } 
        if (n == ' ')
        {
            b=b+1;
        }       
    }
    if (a> 0)
        printf("%d\n", a);
     else 
        printf("\n"); 
    
    return 0; 
}
