#include <stdio.h>  
int main()  
{  
    int A=0,B=0,C=0; 
    scanf("%d  %d  %d",&A,&B,&C);  
    if(A==B)  
    printf("C\n",C);  
    if(A==C)  
    printf("B\n",B);  
    if(B==C)   
    printf("A\n",A);  
    return 0;   
}  
