#include<stdio.h>

void triangle_judge(int a, int b, int c)
{

    if (a+b<=c || b+c<=a || a+c<=b) printf("此三角形不存在\n");
    else
    {
      if (a==b && b==c) printf("此三角形为等边三角形\n");
      else if (a==b || a==c || b==c) printf("此三角形为等腰三角形\n");
      else printf("此三角形为普通三角形\n");
    }

}

    int main()
{

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    triangle_judge(a,b,c);

    return 0;
}

