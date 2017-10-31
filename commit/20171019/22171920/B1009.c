#include<stdio.h>  
#include<string.h>  
int main()
{  
        char str[100][100],ch;  
        int i = 0;  
        do{  
          
          scanf("%s", str[i]);  
            ch=getchar();  
            i++;  
        }while(ch!='\n'); 
        for (int j = i-1; j >= 0; --j)
            {  
            printf("%s",str[j]);    
            if(j != 0){
                printf(" ");  
            }  
        }  
        return 0;  
}  
