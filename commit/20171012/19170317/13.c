#include<stdio.h>
int main()
{
    int x,i,a[30],c;

    printf("请输入一个十进制的整型变量:");
    scanf("%d",&x);
    printf("%d的八进制形式是%o\n",x,x);
    printf("%d的十六进制形式是%x\n",x,x);
   
    printf("%d的二进制形式是",x);
    for(c=0;x!=0;x=x/2)
      {
        i=x%2;
        a[c]=i;
        c++;
      } 
    for(c=c-1;c>=0;c--)
      {
        printf("%d",a[c]);
      }
    printf("\n");
   
    return 0;
}
