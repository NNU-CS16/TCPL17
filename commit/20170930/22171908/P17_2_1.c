#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    long int a;
    signed long int b;
    unsigned int e;
    unsigned long int f;
    short int g;
    signed short int u;
    unsigned short int m;

    printf("char size=%d\n",sizeof(c));
    printf("char size=%d\n",sizeof(i));
    printf("char size=%d\n",sizeof(x));
    printf("char size=%d\n",sizeof(z));
    printf("char size=%d\n",sizeof(a));
    printf("char size=%d\n",sizeof(b));
    printf("char size=%d\n",sizeof(e));
    printf("char size=%d\n",sizeof(f));
    printf("char size=%d\n",sizeof(g));
    printf("char size=%d\n",sizeof(u));
    printf("char size=%d\n",sizeof(m));

    return 0;
}
