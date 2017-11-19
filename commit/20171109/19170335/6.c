    #include <stdio.h>
    void Move(char source, char target)
    {
        printf("%c->%c\n", source, target);
    }
    void Hanoi(int n, char source, char help, char target)
    {
        if (n == 1)
        {
            Move(source, help);
            Move(help, target);
        }
        else
        {
            Hanoi(n - 1, source, help, target);
            Move(source, help);
            Hanoi(n - 1, target, help, source);
            Move(help, target);
            Hanoi(n - 1, source, help, target);
        }
    }
    int Fun(int n)
    {
        if (n == 1)
            return 2;
        else
            return 3*Fun(n - 1) + 2;
    }
   
    int main()
    {
        int n;
        scanf("%d",&n);
        Hanoi(n, 'A', 'B', 'C');
        printf("%d\n",Fun(n));
        return 0;
    }
    
