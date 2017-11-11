  /*检验整数是否为2的幂次方*/
  #include <stdio.h>
  int is_pow2(int n);

  int main()
  {
    int n;
    printf("请输入一个整数:");
    scanf("%d", &n);
    is_pow2(n);            //引用该函数
    return 0;
  }

  int is_pow2(int n)
  {
    printf("%d\n",
           - ! (n == 1 || n % 2 == 0));   //令真为0，假为-1
  } 
