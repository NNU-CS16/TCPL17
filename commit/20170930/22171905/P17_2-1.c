#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    long int a;
    unsigned int b;
    unsigned short int f;
    signed long int d;
    unsigned long int e;
    signed short int h;
    short int g;

    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("long int size=%d\n",sizeof(a));
    printf("unsigned int size=%d\n",sizeof(b));
    printf("unsigned short int size=%d\n",sizeof(f));
    printf("signed long int size=%d\n",sizeof(d));
    printf("unsigned long int size=%d\n",sizeof(e));
    printf("signed short int size=%d\n",sizeof(h));
    printf("short int size=%d\n",sizeof(g));

    return 0;
}
