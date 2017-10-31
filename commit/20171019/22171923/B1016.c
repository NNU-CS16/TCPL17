nclude <stdio.h>  
#include <math.h>  
  
int main(void)  
{  
    int num = 0;  
    char ch = 0;  
    int line = 0;  
    while((scanf("%d %c",&num,&ch) != EOF) && (num <= 1000))  
    {  
        /*得到应打印的行数*/  
        line = (int)sqrt(2*num + 2) - 1;  
  
        int index = 0 , j = 0;  
  
        /** 得到上半部分 */  
        for(index = line; index >= 1; index = index - 2)  
        {  
            for(j = 0;j < (line - index)/2 ;j ++)  
                printf(" ");  
            for(j = 0; j < index; j++ )  
                printf("%c",ch);  
            printf("\n");  
        }  
        /** 得到下半部分 */  
        for(index = 3; index <= line; index = index + 2)  
        {  
            for(j = 0;j < (line - index)/2 ;j ++)  
                printf(" ");  
            for(j = 0; j < index; j++ )  
                printf("%c",ch);  
            printf("\n");  
        }  
        printf("%d\n",num - (line+3)*(line-1)/2 - 1);  
    }  
    return 0;  
}  
