 #include <stdio.h>
 int Hanoi(int);

 int main()
 {
    int n, m;
    scanf("%d",&n);
    m = Hanoi(n);
    printf("%d\n", m);
    return 0;
 }

 int Hanoi (int n)
 {
    if (n == 1)
        return 2;
    else
        return 3*Hanoi(n - 1) + 2;
 }
