#include<stdio.h>
void print_hex(int a)
{
  long n;  
    int hex[8];
    int i,counter;  
    printf("输入一个十进制整数：");
    scanf("%ld",&n);  
    a=n;  
    for(i=1;a/16;i++)   
        a=a/16;  
    counter=i;
    a=n;  
    hex[0]=a%16;
    for(i=1;i<counter-1;i++)
    {  
        a=a/16;  
        hex[i]=a%16; 
    }  
    if(counter-1!=0)  
        hex[counter-1]=a/16;
    for(i=counter-1;i>=0;i--)
    {
        if(hex[i]<=9)  
            printf("%d",hex[i]);  
        else  
            printf("%c",'A'+hex[i]-10);  
    }
    printf("\n"); 
}
int main() 
{
   int a;
   print_hex(a);
       
   return 0;

}
