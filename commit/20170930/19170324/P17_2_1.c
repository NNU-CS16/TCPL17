#include<stdio.h>
int main()
{
        int a;
        unsigned int b;
        short int c;
        unsigned short int d;

        printf("int                size=%lu\n",sizeof(a));
        printf("unsigned int       size=%lu\n",sizeof(b));
        printf("short int          size=%lu\n",sizeof(c));
        printf("unsigned short int size=%lu\n",sizeof(d));

        return 0;
}
