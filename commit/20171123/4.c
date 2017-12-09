    #include <stdio.h>
    int add(int n1, int n2);
    int main()
    {
        int n1, n2;
        printf ("input n1:");
        scanf ("%d", &n1);
        printf ("input n2:");
        scanf ("%d", &n2);
        printf ("%d",  add(n1, n2));
        return 0;
    }
    int add(int n1, int n2)
    {
        int x = n1 ^ n2;
        int y = (n1 & n2) << 1;
        while(y != 0)
        {
            int a = x;
            int b = y;
            x = a ^ b;
            y = (a & b) << 1;
         }
         return x;
     }
