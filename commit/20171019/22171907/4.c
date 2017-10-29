#include <stdio.h>  
int main()  
{  
    int X,Y,N;  
    scanf("%d",&N);  
    int mark;  
    mark=0;  
    for(X=1;X<=100;X++){  
           
        for(Y=X;Y<=100;Y++){  
            if(X*X+Y*Y==N){  
                mark=1; //通过sign标记的变化值，判断是否有解；   
                printf("%d %d\n",X,Y);  
                  
            }  
        }  
    }  
       
    if(mark==0)  
       
        printf("No Solution");  
          
    return 0;  
}   
