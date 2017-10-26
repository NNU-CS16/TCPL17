#include<stdio.h>
int main()
{
   int x,g,s,b;
   printf("请输入一个三位整数：");
   scanf("%3d",&x);
   b=(x-x%100)/100;
   g=x%10;
   s=(x%100-g)/10;
   if(g==0&&s!=0)
      printf("%d的逆序是%d%d\n",x,s,b);
      else if(g==0&&s==0)
            printf("%d的逆序是%d\n",x,b);
           else printf("%d的逆序是%d%d%d\n",x,g,s,b);
   return 0;
}

