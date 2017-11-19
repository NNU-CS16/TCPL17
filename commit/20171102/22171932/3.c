#include<stdio.h>
int is_pow2(int n);
int main()
  {   
    int n,a;
    printf("请输入正整数n:\n");
    scanf("%d",&n);
    a=is_pow2(n);
    printf("%d\n",a);
    return 0;
  }
int is_pow2(int n)

  {
   int i;
   for(i=2;n>=i;i=i*2)
      {
      if(n%i==0)
        continue;
      else
        {return -1;break;}
      }
   return 0;
  }
