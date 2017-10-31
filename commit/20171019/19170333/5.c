#include<stdio.h>
int main()
{  
    int i=0;
    char s;
    
    while(1)
   {
     
     scanf("%c",&s);
     
     if(s != ' '&&s!='.')
     { i++;}
     if(s == ' '|| s == '.')
     {printf("%d\t",i);
     i=0;}
     if(s == '.')
     break;  
   }   
 
    printf("\n");
    return 0;
}
