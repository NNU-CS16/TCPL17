#include <stdio.h>
    void Move(char source, char target);
    void Hanoi(int n, char source, char help, char target);
    int times = 0 ;
    int main()
    {
        int N;
        printf ("input N:");
        scanf ("%d", & N);
        Hanoi(N, 'A', 'B', 'C');
        printf("%d\n",times);
        return 0;
    }
    void Move(char source, char target)
    {
        printf ("%c->%c\n", source, target);
        times++;
    }
    void Hanoi(int n, char source, char help, char target)
    {
        if (n == 1)
        {
            Move(source,help);
            Move(help,target);
        }
        else
        {
            Hanoi(n-1, source, help, target);
            Move(source,help);
            Hanoi(n-1, target, help, source);
            Move(help, target);
            Hanoi(n-1, source, help, target);
        }
    }
