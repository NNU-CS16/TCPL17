#include <stdio.h>
int main()
{
    char a[100];
    int i = 0;
    do
    {
        scanf("%c", &a[i]);
        i++;
     } 
     while(a[i-1]!= '.');
     int j;
     int c=0;
     int k=0;
     for(j=0;j<i;j++)
     {
         if(a[j]!=' ') 
         {
             c++;
             if(k!=0&&a[j]!='.')
             {
                 printf(" ");
                 k=0;
             }
            if(a[j]=='.'&&a[j-1]!=' '&&c!=1)
            {
                 printf("%d\n",c-1);
             }
         }
         else if(c!=0)
         {
                 printf("%d",c);
                 c=0;
                 k=1;
         }
     }     
    return 0;
 }

