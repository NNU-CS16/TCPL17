#include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    long int e;
    signed long int f;
    unsigned int g;
    unsigned long int h;
    short int i;
    signed short int j;
    unsigned short int k;

    printf("char  size=%d\n",sizeof(a));
    printf("int  size=%d\n",sizeof(b));
    printf("float  size=%d\n",sizeof(c));
    printf("double  size=%d\n",sizeof(d));
    printf("long int  size=%d\n",sizeof(e));
    printf("signed long int  size=%d\n",sizeof(f));
    printf("unsigned int  size=%d\n",sizeof(g));
    printf("unsigned long int  size=%d\n",sizeof(h));
    printf("short int  size=%d\n",sizeof(i));
    printf("signed short int  size=%d\n",sizeof(j));
    printf("unsigned short int  size=%d\n",sizeof(k));

    return 0;
}
