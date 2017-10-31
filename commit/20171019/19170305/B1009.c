#include <stdio.h>  
#include <string.h>        
char a[81];        
int main()  
{  
   int i, j;  
   char *p;  
   gets(a);  
   j = strlen(a);  
   p = a + j;  
   while (1)  
   {  
      if ( p == a )  
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
