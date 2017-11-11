  #include <stdio.h>
  void triangle_judge(int a,int b,int c);
  int main()
  {
      int x, y, z;
      scanf("%d%d%d",&x,&y,&z);
      triangle_judge(x, y, z);
      return 0;
  }

  void triangle_judge(int a, int b, int c)
  {
      if(a+b>c && a-b<c)
      {
          if(a == b || a == c || b == c)
          { 
              printf("等腰三角形");
          }
          if(a == b && b == c)
          {
              printf("等边三角形");
          }
          else
          {
              printf("普通三角形");
          }
      }
  }

