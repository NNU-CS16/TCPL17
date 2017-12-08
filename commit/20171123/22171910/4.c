/*用非四则运算符号求n1,n2的和*/
#include <stdio.h>
int add(int n1, int n2);

int main()
{
  int n1, n2;
  printf("请输入整数n1 n2:");
  scanf("%d%d", &n1, &n2);
  printf("%d", add(n1, n2));
  return 0;
}

int add(int n1, int n2)        //设定函数求和
{
  int m, n;
  m = n1 ^ n2;                 //将n1,n2各位数相加
  n = (n1 & n2) << 1;         //进行进位
  if (n == 0)
     return m;
  else
     return add(m, n);       //通过递归实现求和
}
