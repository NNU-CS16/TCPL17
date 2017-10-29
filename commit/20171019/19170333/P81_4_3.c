#include<stdio.h>
#include<math.h>
int main()

{
   int n,m=2;
   printf("请输入一个整数：");
   scanf("%d",&n);
   
   for(m=2;m<=sqrt(n);m++)
   if (n%m==0) 
      printf("%d是素数.\n",n);
   else  printf("%d不是素数.\n",n);
   
   return 0;
}
