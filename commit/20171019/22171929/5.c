#include <stdio.h>
int main()
{  
    char c;  
    int i=0;  
    while(scanf("%c",&c))
    {  
        if(c!=32 && c != '.')
        {  
            i++;  
        }
        else if(c == 32)
        {  
            if(i) printf("%d ", i);  
            i = 0;  
        }
        else if(c == '.')
        {  
            if(i) printf("%d", i);  
            break;  
        }  
    }  
}
