#include<stdio.h>
#include<math.h>
int mod(int p,int q);
int main()
{
   int a;
   int b;
   int c;
   int d;
   int f;
   printf("请输入a,b,c的值:");
   scanf("%d%d%d",&a,&b,&c);
   d=pow(a,b);
   f=mod(d,c);
  
   printf("%d\n",f);

   return 0;
}

int mod(int p,int q)

{

 
   return p%q;
}
 
