  #include<stdio.h>
  int main()

  {
     int n;
     int a,b,c;
     printf("请输入任意一个三位数:");
     scanf("%d",&n);

     a=n%10;
     b=n/10%10;
     c=n/100;
     n=100*a+10*b+c;

     printf("%d\n",n);
     
     return 0;
  }
   
