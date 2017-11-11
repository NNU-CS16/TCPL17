 #include <stdio.h>
  void triangle_judge(int a, int b, int c);


  int main()
  {
      int a,b,c;

      scanf("%d%d%d",&a,&b,&c);
      triangle_judge( a, b, c);

      return 0;
  }

  void triangle_judge(int a, int b, int c)
  {
     if(a+b>c&&b+c>a&&a+c>b)
       {
          if(a==b&&b==c)
            printf("This is an equilateral triangle.");
          else if(a==b||b==c||a==c)
                 printf("This is an isosceles triangle.");
             else printf("This is a scalene triangle.");
       }
     else printf("Not a triangle.");
  }


