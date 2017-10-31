#include<stdio.h>
int main()
{
 float a1,a2;
 int b;
 char c;
 printf("顺序输入字符 整数 浮点数1 浮点数2：");
 scanf("%f %d %c %f",&a1,&b,&c,&a2);
 printf("%c %d %.2f %.2f\n",c,b,a1,a2);
 return 0;

}
