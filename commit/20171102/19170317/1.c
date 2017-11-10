#include <stdio.h>
void triangle_judge(int a, int b, int c);

int main()
{
	int x, y, z;
    printf("请输入x, y, z的值:");
    scanf("%d%d%d",&x, &y, &z);
    triangle_judge(x, y, z);
    return 0;
}

void triangle_judge(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a) 
    {
      if (a != b && a != c && b != c) 
        printf("%d,%d,%d三边构成普通三角形\n",a, b, c);
      else
        if (a == b && a == c && b == c)
          printf("%d,%d,%d三边构成等边三角形\n", a, b, c);
        else
          printf("%d,%d,%d三边构成等腰三角形\n", a, b, c);
    }
    else
      printf("%d,%d,%d三边不能构成三角形\n",a,b,c);
}
