#include <stdio.h>
int mult(int n);
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    sum+ = mult(n);
    sum+ = mult(n);
    sum+ = mult(n);
    sum+ = mult(n);
    sum+ = n;
    sum = (sum >> 1);
    printf("%d\n", sum);
    return 0;
}
int mult(int n)
{
    int temp = 0;
    static int i = 0;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    temp+ = (((0 - (((1 << i) & n) >> i)) & n) << i);i++;
    return temp;
}
