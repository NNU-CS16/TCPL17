#include <stdio.h>

int main()
{
   int n,i,c=0,a[30];

   printf("请输入一个十进制整数n：");
   scanf("%d",&n);

   printf("转换成十六进制：%x\n",n);
   printf("转换成八进制：%o\n",n);

   while(n!=0)
   {
         i=n%2;
         a[c]=i;
         c++;
         n=n/2;
   }
   printf("转换成二进制：");
   c--;
   for(;c>=0;c--)
   {
      printf("%d",a[c]);
   }
   printf("\n");

   return 0;
}
