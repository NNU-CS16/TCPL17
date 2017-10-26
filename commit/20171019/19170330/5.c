#include<stdio.h>
int main()
{
    char i;
    int  n,m;
    do
    {
       scanf("%c",&i);
       if (n==0&&i==' ')
       {
          continue;
       }
       if (n==0&&i=='.')
       {
          break;
       }
       if (i==' ')
       {
         if(m==0)
         {
            printf("%d",n);
         }
         else
         {
            printf(" %d",n);
         }
         n=0;
         m++;
        continue;
       }
       if (i=='.')
       {
           if(m==0)
           { 
              printf("%d",n);
           }
           else 
           {
              printf(" %d",n);
           }
        break;
       } 
          n++;
    }
       while (i!='.');
     
    return 0;
}
