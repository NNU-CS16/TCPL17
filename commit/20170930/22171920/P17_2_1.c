#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    long int l;
    signed long int a;
    unsigned int y;
    short int n;
    signed short int g;
    unsigned short int e;
    unsigned long int k;


    printf("char        size=%d\n",sizeof(c));
    printf("int         size=%d\n",sizeof(i));
    printf("float       size=%d\n",sizeof(x));
    printf("double      size=%d\n",sizeof(z));
    printf("long int    size=%d\n",sizeof(l));
    printf("signed long int      size=%d\n",sizeof(a));
    printf("unsigned int         size=%d\n",sizeof(y));
    printf("short int            size=%d\n",sizeof(n));
    printf("signed short int     size=%d\n",sizeof(g));
    printf("unsigned short int   size=%d\n",sizeof(e));
    printf("unsigned long int    size=%d\n",sizeof(k));


   return 0;
}




