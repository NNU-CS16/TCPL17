#include<stdio.h>  
#include<string.h>  
int main(){  
    char a[90];  
    char b[45][90];  
    memset(a, 0, sizeof(a));  
    memset(b, 0, sizeof(b));  
    int j = 0, num = 0;  
    gets(a);  
  
    for (int i = 0; i < sizeof(a); i++)  
    {  
  
        if (a[i] == ' ')  
        {  
            j = 0;  
            num++;  
            continue;  
        }  
        b[num][j++] = a[i];  
    }  
  
    for (; num>0; num--)  
    {  
        printf("%s ", b[num]);  
    }  
    printf("%s\n", b[num]);  
    return 0;  
}  

