#include<stdio.h>
int main()
{
   int a=0;
   char b;
   printf("请输入一行字符串：\n");
   while(b!='.')
{
   scanf("%c",&b);
   if(b==' ')
{
   if(a!=0){
   printf("%d ",a);
   a=0;}
}
   if(b!=' '&&b!='.')
   a++;
   if(b=='.')
{
   if(a!=0)
   printf("%d",a);
}
}

   return 0;
}

