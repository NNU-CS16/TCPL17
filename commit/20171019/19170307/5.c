#include<stdio.h>
int main()
{
    int i=0;
    char n;
    printf("please input a sentence：\n");
    while(1)
    {
       scanf("%c",&n);
       if(n!=' '&&n!='.')
       i++;
       if(n==' '||n=='.')
      {
       printf("%d\t",i);
       i=0;
      }
       if(n=='.')
       break;
    }
    printf("\n");
    return 0;
}
