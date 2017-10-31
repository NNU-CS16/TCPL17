#include <stdio.h>
#include <string.h>

void print(char c)
{

      switch (c)
      {
        
        case '-':printf("fu"); break;
        case '0':printf("ling"); break;
        case '1':printf("yi"); break;
        case '2':printf("er"); break;
        case '3':printf("san"); break;
        case '4':printf("si"); break;
        case '5':printf("wu"); break;
        case '6':printf("liu"); break;
        case '7':printf("qi"); break;
        case '8':printf("ba"); break;
        case '9':printf("jiu"); break;
      };
       
 
}


int main()
{
    char s[1000];
    scanf("%s",s);
   
    print(s[0]);
    for (int i=1;i<strlen(s);i++) { printf(" "); print(s[i]); }    
    
    printf("\n");
    
    return 0;
  
}
