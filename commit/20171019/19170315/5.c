#include <stdio.h>
int main()
{
  int x=0;
  char c;
  
  printf("请输入一行字符串：\n");
  do
  {
    scanf("%c",&c);
    if(c!=' ' && c!='.')
       x++;
    if(c==' ')
      {
        if(x!=0)
         {
           printf("%d ",x);
           x=0;
         }
      }
    if(c=='.')
      { 
        if(x!=0)
          {
            printf("%d ",x);
            break;
          }
      } 
        
  }while(c!='\n');
  
  printf("\n");
  return 0;
}
