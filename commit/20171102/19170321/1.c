#include <stdio.h>
    void  triangle_judge(int a, int b, int c);
    int main()
    {
        int x, y, z;
        scanf("%d%d%d",&x, &y, &z);
        triangle_judge (x, y, z);
        return 0;
    }
     void  triangle_judge(int a, int b, int c)
    {
        if (a + b > c && b + c > a && a + c > b)
            {
                 if (a == b && b == c)
                     printf ("equilateral triangle");
                 if (a != b && b != c)
                     printf("common triangle");
                 if ( (a == b && b != c) || (a == c && c != b) || (b == c && c != a) )
                     printf ("isosceles triangle");
             }
        else
            printf ("%d %d %d can't form a triangle.", a, b, c);
    }
