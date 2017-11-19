#include <stdio.h>
    void Move(char sourse, char taget);
    void Hanoi(int n, char sourse, char help, char target);

    int main()
    {
        Hanoi(3, 'a', 'b', 'c');
        return 0;
    }

    void Move(char sourse, char target)
    {
        printf("%c->%c\n", sourse, target);
    }

    void Hanoi(int n, char sourse, char help, char target)
    {
        if(n==1)
        Move(sourse, target);
        else
        {
            Hanoi(n-1, sourse, target, help);
            Move(sourse, target);
            Hanoi(n-1, help, sourse, target);
         }
    }
