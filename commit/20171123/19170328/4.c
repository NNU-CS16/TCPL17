#include<stdio.h>
int add(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Please input n1, n2:\n");
    scanf("%d%d", &n1, &n2);
    printf("%d", add(n1, n2));
    return 0;
}

int add(int n1, int n2)
{
    int bw, jw; //本位和进位//
    while (jw != 0)
    {
        bw= n1 ^ n2;
        jw = (n1 & n2) << 1;
        n1 = bw;
        n2 = jw;
    }
    return bw;//返回本位值//
}
