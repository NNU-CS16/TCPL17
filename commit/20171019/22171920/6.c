#include<stdio.h>
int main()  
{  
    int A,B,C;  
    printf("input three numbers:");
    scanf("%d %d %d",&A,&B,&C);  
    
   if((A!=B)&&(A!=C)) printf("%d\n",A);  
   if((B!=A)&&(B!=C)) printf("%d\n",B);  
   if((C!=A)&&(C!=B)) printf("%d\n",C);  
          
    return 0;  
}  
