#include<stdio.h>
int main()
{
    int a;
    unsigned int b;
    short int c;
    unsigned short int d;
    
    printf("int size=%d\n",sizeof(a));
    printf("unsigned int size=%d\n",sizeof(b));
    printf("short int size=%d\n",sizeof(c));
    printf("unsigned short int size=%d\n",sizeof(d));

    return 0;
}
