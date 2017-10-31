#include<stdio.h>
int main()
{
char a;
int b=0;
while(scanf("%c",&a))
{

   if(a!=32 && a!='.')
       b++;
   else if(a==32)
       {
       if(b) printf("%d",b);
        b=0;
       }
         else if(a=='.')
         {
           if (b) printf("%d",b);
           break;
         }
}   



}
