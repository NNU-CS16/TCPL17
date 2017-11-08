 #include <stdio.h>
 void triangle_judge (int a, int b, int c)
 {
    if ( a + b <= c || a + c <= b || b + c <= a)
	printf ("can not\n");
    else  if (a == b || a == c || b == c)
    { 
        if (a == b && a == c && b == c)
            printf ("等边三角形\n");
        else
            printf ("等腰三角\n"); 
    } 
        else
            printf ("一般的三角形\n");  
 }
 int main ()
 { 
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    triangle_judge (a, b, c);
    return 0;
 } 

