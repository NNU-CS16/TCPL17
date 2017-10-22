#include<stdio.h>
int main()
{
   int a,b,c,x,y;
   y=1;
   scanf("%d",&x);
   
 
    
      for(a=x;a<=x+3;a++)
        
          for(b=x;b<=x+3;b++)
           
             for(c=x;c<=x+3;c++)
               
                 if (a!=b&&b!=c&&c!=a)
                   if (y<6)
                   {
                     y++;
                     printf("%d%d%d ",a,b,c);
                   }
                   else
                   {
                     y=1;
                     printf("%d%d%d\n",a,b,c);
                   }
                
                     return 0;
}       
