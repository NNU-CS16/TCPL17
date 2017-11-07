#include<stdio.h>
#include<math.h>
void print_hex(int a)
{

if(a<0)
{
        printf("-");
}
        a = fabs(a);
if(a>0)
{
     print_hex(a/16);
    a %= 16;
     if(a<10)
     printf("%c",a+'0');
    else
     printf("%c",a-10+'A');
}
         
}
 
int main()
{
int a;
scanf("%d",&a);
if(a == 0)
printf("0");
else
print_hex(a);
printf("\n");
return 0;
}
