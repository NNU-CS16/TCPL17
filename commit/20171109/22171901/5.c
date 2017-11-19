#include <stdio.h>
int move (char A , char C);
void hanoi (int n , char A , char B, char C);

int i = 0;
int main()
{
    int n;
    scanf ("%d" , &n);
    hanoi (n , 'A' , 'B' , 'C');
    printf("%d\n" , 2 * i);
    return 0;
}

int move (char A , char C)
{
    i++;
}

void hanoi (int n, char A ,char B , char C)
{
    if (n == 1)
        move (A , C);
    else
    {

        hanoi (n - 1 , A , C , B);
        move (A , C);
        hanoi (n - 1 , B , A , C);
    }
}

