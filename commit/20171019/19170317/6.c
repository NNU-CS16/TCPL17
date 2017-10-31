#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入A,B,C三个球的质量:");
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
      if(a==b) printf("C");
      else if(a==c) printf("B");
        else printf("A");   
    }
    return 0;
}
