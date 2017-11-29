#include <stdio.h>    
#include <string.h>    
int main()    
{    
    char A[1000], B[1000];    
    int i, len_a, len_b, len_max, k;    
    int a[1000]={0}, b[1000]={0}, c[1000]={0};    
    scanf("%s", A);    
    len_a = strlen(A);    
    for(i = 0; i <= len_a -1; i++)    
        a[i] = A[len_a -1 -i]- '0';    
    scanf("%s", B);    
    len_b = strlen(B);    
    for(i=0; i <= len_b -1; i++)    
        b[i] = B[len_b -1 -i]-'0';    
    if(len_a > len_b)    
        len_max = len_a;    
    else    
        len_max = len_b;    
    k=0;    
    for(i=0; i<=len_max -1; i++)    
    {    
        c[i] = (a[i] + b[i] + k)%10;    
        k=(a[i] + b[i] + k)/10;    
    }    
    if(k!=0)  
        c[len_max] = 1;    
    if(c[len_max] == 1) 
        printf("1");    
    for(i = len_max -1; i>=0; i--)    
        printf("%d", c[i]);    
    return 0;    
}         
