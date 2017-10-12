#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    unsigned int y;
    short int e;
    unsigned short int m;

    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("unsigned int=%d\n",sizeof(y));
    printf("short int size=%d\n",sizeof(e));
    printf("unsigned int size=%d\n",sizeof(m));

    return 0;
}
