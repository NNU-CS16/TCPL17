#include<stdio.h>
int main()
{
  float m,n;
  char y;
  int x;

  printf("按顺序输入浮点数m,整数x,字符y,浮点数n");
  scanf("%f,%d,%c,%f",&m,&x,&y,&n);
  
  printf("%c,%d,%.2f,%.2f\n",&y,&x,&m,&n);
  
  return 0;
}
