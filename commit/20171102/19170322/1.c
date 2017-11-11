    #include <stdio.h>
    void triangle_judge(int a, int b, int c)
    {
        if (a+b > c && b+c > a && a+c > b)
        {    if(a == b || a == c || b == c)
             {    if(a == b && b == c)
	              printf("是等边三角形");
                  else    
	              printf("是等腰三角形");
             }             
             else printf("是普通三角形");
        }
        else printf("无法构成三角形");
    }   
    int main()
    {
        int a, b, c;
        printf("input a b c :");
        scanf("%d %d %d", &a, &b, &c);
        triangle_judge(a, b, c);
        return 0;
    }

