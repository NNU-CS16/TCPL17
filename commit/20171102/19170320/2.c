#include <stdio.h>
void print_hex(int a);
void print_hex(int a)
{
    printf("%x",a);


}
int main()
{
    int a;
    scanf("%d",&a);
    print_hex(a);
    printf("%x\n",a);

    return 0;
}
