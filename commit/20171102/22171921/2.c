#include <stdio.h>
#include <string.h>

void print_hex(int a)
{
    int n=0, i=0;  
    char t[12] = {0};    
    if (a != 0)  
    {  
        while(a)   
        {  
            n=a% 16;   
            switch(n)  
            {                
                case 10 : t[i] = 'A';
                break;  
                case 11 : t[i] = 'B';
                break;  
                case 12 : t[i] = 'C';
                break;  
                case 13 : t[i] = 'D';
                break;  
                case 14 : t[i] = 'E';
                break;  
                case 15 : t[i] = 'F';
                break;  
                default : t[i] = n + '0';
                break;  
            }  
            i++;   
            a=a / 16;  
        }     
        t[i] = '\0';  
        a = strlen(t) - 1;   
        for( i = n; i >= 0; i-- )   
        {  
            printf("%c",t[i]);    
        }   
    }  
    else  
        printf("0");      
} 

int main()
{
    int a;
    printf("十进制数为:");
    scanf("%d", &a);
    print_hex(a);
    return 0;
}
