#include <stdio.h>  
#include <string.h>  
  
#define size 100000  
int main(void)  
{  
    char input[size] = { '\0' };  
    int sum = 0;  
    int er[1000] = {0};  
    gets(input);  
    int len = strlen(input);  
    for (int i = 0; i < len; i++)  
    {  
        if (input[i] >= 'A'&&input[i] <= 'Z')  
        {  
                input[i] += 32;  
        }  
        if (input[i] >= 'a'&&input[i] <= 'z')  
        {  
                sum += input[i] - '`';  
        }  
    }  
    int j = 0;  
    while (sum)  
    {  
        er[j++] = sum % 2;  
        sum /= 2;  
    }  
    int zero = 0, one = 0;  
    for (int i = 0; i < j; i++)  
    {  
        if (er[i] == 0)  
        {  
            zero++;  
        }  
        else  
        {  
            one++;  
        }  
    }    
    printf("%d %d\n", zero, one);  
    return 0;  
}  
