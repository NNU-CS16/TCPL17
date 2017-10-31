#include <stdio.h>
#include <ctype.h>
int main()
{
    char line[81], *p = line, *i;
    fgets(line, 81, stdin);
    
    while(*++p);  
    while(p > line)
    {
        while(isspace(*--p)) ;                        
        while(p > line && !isspace(*(p - 1))) p--;               
        for(i = p; *i && !isspace(*i); putchar(*i++)); 
        putchar(p == line ? '\0' : ' ');
    }

    return 0;
}
