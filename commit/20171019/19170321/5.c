#include<stdio.h>
int main()
{
  char c;
  int num=0;
   while(scanf("%c",&c))
   {
       if (c!=32&&c!='.')
        num=num+1;
      if(c==32)
      {
        if(num)
          printf("%d ",num);
        num=0;
      }
      if(c=='.')
      {
        if(num)
          printf("%d",num);
        break;
      }
    }
  return 0;
}

