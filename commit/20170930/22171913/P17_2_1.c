#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    long int h;
    unsigned int m;
    short int n;
    unsigned short int y;

    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("long int size=%d\n",sizeof(h));
    printf("unsigned int size=%d\n",sizeof(m));
    printf("short int size=%d\n",sizeof(n));
    printf("unsigned short int size=%d\n",sizeof(y));

    return 0;
} 
