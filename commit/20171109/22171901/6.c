#include <stdio.h>
void move (char A, char B);
void hanoi (int n, char A, char B, char C);

int i = 0;
int main()
{
    int n;
    scanf ("%d",&n);
    hanoi (n , 'A' , 'B' , 'C');
    printf ("%d\n" , i);
    return 0;
}

void move (char A , char B)
{
    i++;
    printf ("%c->%c\n" , A , B);
}

void hanoi (int n, char A, char B, char C)
{
    if (n == 1)
    {
        i = i + 2;
    }
    else
    {

        hanoi (n - 1 , A , B , C);
        i++;
        hanoi (n - 1 , C , B , A);
        i++;
        hanoi (n - 1 , A , B , C);
    }
}

