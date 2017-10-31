#include <stdio.h>
int main()
{
     char str[80][80];              
     char dsr[80];                 
     int i, j = 0, k = 0;
     for(i = 0; i < 80; i++) 
{
         scanf("%c", &dsr[i]);
         if(dsr[i] == '\n')
           {      
             break;
          } 
}
     dsr[i] = '\0';                 
     for(i = 0; i < 80; i++) 
{
         if(dsr[i] == '\0') 
{
             str[j][k] = '\0';
             break;
         }
         str[j][k]  = dsr[i];        
         k++;
         if(dsr[i] == ' ') 
          {
             str[j][k-1] = '\0';    
             j++;
             k = 0;
         }
    }
     int t = j;                   
 
     for(j = t ; j >= 0; j--) 
     {
         printf("%s", str[j]);
         if(j != 0) 
        {
             printf(" ");
         }
     }
     printf("\n");
     return 0;
} 
