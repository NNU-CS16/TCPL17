#include <stdio.h>  
#include <string.h>    
int main()  
{  
    int i, k;  
    char *p;
    char str[1000];  
    gets(str);  
    k = strlen(str);
  printf("%d",k);  
    p = str + k;
    while (1)  
     {  
        if ( p == str )  
        {  
            printf("%s\n", p);  
            break;  
	}  
        if (*p == ' ' && *(p+1) != ' ')  
        {  
           *p = '\0';  
           printf("%s ", p+1);  
        }  
        p--;  
     }  
    return 0;  
}  



