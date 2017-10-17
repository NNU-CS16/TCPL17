#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    unsigned int y;
    short int m;
    unsigned short int n;

    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("unsigned int size=%d\n",sizeof(y));
    printf("short int size=%d\n",sizeof(m));
    printf("unsigned short int size=%d\n",sizeof(n));

    return 0;
}
