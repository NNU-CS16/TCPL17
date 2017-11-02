#include<stdio.h>
int main()
{
  int i=0; //字符个数
  char A;
 
  while(1)//死循环
  {
     scanf("%c",&A); 
     if(A=='.')
      {
       if(i!=0)
      {
       printf("%d ",i);
      }
       printf("\n");
       break;
      }
 
   if(A==' ')
      {
       if(i!=0)
         {
          printf("%d ",i);
          i=0;
         }
      }
   else
      {
       i+=1;
      }
    }
 return 0;
} 
