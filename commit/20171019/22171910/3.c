/*题目：念数字*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n,m,a=1,b;
  scanf("%d",&n);
  if(n<0)
    printf("fu ");
  n=fabs(n);              //确定进行后续计算的数字n为非负数
  m=n;
  while(m>9)             //确定该数为几位数
  {
    m=m/10;
    a=a*10;
  }
  char *s[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};    //将字符串定义至相应地址
  while(a>0)
  {
    b=n/a;
    printf("%s",s[b]);          //利用指针输出相应字符串
    if(a>9) printf(" ");       //字符串间用空格隔开
    n%=a;
    a/=10;
  }
  printf("\n");
  return 0;
}
