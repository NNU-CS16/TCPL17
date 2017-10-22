  #include<stdio.h>
  int main()
  
  {
     int a;
     printf("输入一个【0,153】范围内的正整数:");
     scanf("%d",&a);
     printf("%d\n",a%16+a/16*10);

     return 0;
  }

