#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    signed long int v; 
    unsigned int b;
    short int m;
    unsigned short int y; 
 
    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("signed long int size=%d\n",sizeof(v));
    printf("unsigned int size=%d\n",sizeof(b));
    printf("short int size=%d\n",sizeof(m));
    printf("unsigned short int size=%d\n",sizeof(y));
 
    return 0;
}
