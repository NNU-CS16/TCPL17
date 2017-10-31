#include<stdio.h> 

int main ()
{
    int count = 0, count_0 = 0;
    char n;
    while((n = getchar()) != '.') {
        if (n != ' ') {
            if (count > 0 && count_0 > 0) { 
                printf("%d ", count);
                count = 0;
            }
            count ++;
            count_0 = 0;  
            continue;   
        } 
        if (n == ' ') {
            count_0 ++;
        }       
    }
    if (count > 0) {   
        printf("%d\n", count);
    } else {
        printf("\n");  
    }
    
    return 0; 
}
