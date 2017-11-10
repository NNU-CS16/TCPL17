#include<stdio.h>

void print_hex(int a)
{
     int i;
     char buffer[1000];
     if(a<16)
     {
        if(a<10)
           buffer[i]=a+'0';
        else 
           buffer[i]=a-10+'A';
           buffer[i+1]='\0';
     }
     else{
          print_hex(a/16);
          i++;
          a%=16;
     if(a<10)
         buffer[i]=a+'0';
     else
         buffer[i]=a-10+'A';
     }
     puts(buffer);
     
}
int main()
{
     int a;
     
     scanf("%d",&a);

     print_hex(a);



     return 0;
} 




     
