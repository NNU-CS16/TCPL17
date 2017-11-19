#include <stdio.h>      
int moveNum = 0;
 
void main()
{
    void Hanoi(int n, char one, char two, char three);
    int m;
    printf("盘等数量: ");
    scanf("%d", &m);
    Hanoi(m, 'A', 'B', 'C');
}
 
void Hanoi(int n, char one, char three, char two)
{
    void move(char x, char y, int *j);
    if (n == 1)
        move(one, three, &moveNum);
        else
        {
            Hanoi(n - 1, one, three, two);
            move(one, three, &moveNum);
            Hanoi(n - 1, two, one, three);
       }
}
 
void move(char x, char y, int *j)
{
    printf("%c->%c\n", x, y);
    (*j)++; 
}
