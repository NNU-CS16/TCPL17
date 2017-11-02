#include <stdio.h>  

int main()  
{   int i=0;  
    char s;  
    while(1)
    {  
      scanf("%c",&s);  
      if(s== '.')
      {  
        if(i!=0)
          printf("%d",i);
        printf("\n");
        break;  
      }  
      if(s==' ')
      {  
        if(i!=0)
        {  
          printf("%d ",i);  
          i=0;  
        }  
      }
        else  
          i++;  
    }  
    return 0;  
}  
