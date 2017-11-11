  /*判断数值能否构成三角形及其类型*/
  #include <stdio.h>
  #include <math.h>
  void triangle_judge(int a, int b, int c);

  int main()
  {
    int a, b, c;
    triangle_judge(a, b, c);
    return 0;
  }

  void triangle_judge(int a, int b, int c)
  {
    printf("请输入三个正整数：");
    scanf("%d%d%d", &a, &b, &c);
    if (fabs(b - c) < a && a < (b + c))
    {
      if (a == b && b == c)
         printf("该三边可构成等边三角形\n");
      else if (a != b && a != c && b != c)
              printf("该三边可构成普通三角形\n");
      else printf("该三边可构成等腰三角形\n");
    }
    else printf("该数值不可构成三角形");
  }
