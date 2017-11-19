#include <stdio.h>
void move (char A, char C);
void hanoi (int n, char A, char B,char C);


int main()
{
    int n;
    scanf ("%d", &n);
    hanoi (n , 'A' , 'B' , 'C');
    return 0;
}

void move (char A ,char C)
{

    printf ("%c->%c\n", A ,C);
}

void hanoi (int n, char A ,char B, char C)
{
    if (n == 1)
        move (A , C);
    else
    {
        hanoi (n-1 , A , C , B);
        move (A , C);
        hanoi (n-1 , B , A , C);

    }
}




