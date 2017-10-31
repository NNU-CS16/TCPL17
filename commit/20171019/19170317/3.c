#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int i,len;
    printf("请输入一个整数a:");
    while(scanf("%s",a)!=EOF)
    {
      len=strlen(a);
      for(i=0;i<len;++i)
      {
        switch(a[i])
        {
          case'-': printf("fu"); break;
          case'0': printf("ling"); break;
          case'1': printf("yi"); break;
          case'2': printf("er"); break;
          case'3': printf("san"); break;
          case'4': printf("si"); break;
          case'5': printf("wu"); break;
          case'6': printf("liu"); break;
          case'7': printf("qi"); break;
          case'8': printf("ba"); break;
          default: printf("jiu"); break;
        }
        if(i<len-1)
          printf(" ");
      }
    }  
    return 0;
}
