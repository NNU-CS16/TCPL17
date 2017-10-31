#include<stdio.h>
int main()
{
   char c;
    int i=0,flag=0;
    c=getchar();
    while (c!='.')
    {
       if (c!=' ') i++;
      else
        if (i!=0)
        {
          printf("%d",i);
          i=0;
          flag=1;
        }
      c=getchar();
      if (c!='.' && flag && i==0) printf(" ");
      }
    if (i!=0) printf("%d\n",i);
    return 0;
    }
