#include<stdio.h>  
int main()  
{  
    int num, a[4] = {0}, mied, sub, i,j,ch;  
    scanf("%d",&num);  
    do  
    {  
        a[0] = num / 1000;  
        a[1] = num % 1000 / 100;  
        a[2] = num % 100 / 10;  
        a[3] = num % 10;   
        for (i = 0;i < 3;i++)  
        {  
            for (j = 0;j < 3;j++)  
            {   
                if (a[j] < a[j + 1])  
                {  
                    ch = a[j];  
                    a[j] = a[j + 1];  
                    a[j + 1] = ch;  
                }  
            }  
        }  
        if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])  
        {  
            printf("%04d - %04d = 0000\n", num, num);  
            break;  
        }  
        else  
        {  
            mied = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];  
            sub = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];  
            num = mied - sub;  
            printf("%04d - %04d = %04d\n", mied , sub, num);  
        }  
    }
    while(num != 6174);        
} 
