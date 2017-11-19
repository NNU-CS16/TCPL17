    #include <stdio.h>
    int main()
    {

        int x, i, a, b, d;
        int y[1000];
        scanf("%d%d%d",&a,&b,&d);
        x = a + b;
        for (i = 0; ; i++)
        {
            if (x < d)
            {
                y[i] = x;
                break;
            }
            else
            {
                y[i] = x % d;
                x = ( x - y[i]) / d;
            }
        }
        
        for ( ; i >= 0; i--)
            printf("%d", y[i]);
        return 0;
               
    }
