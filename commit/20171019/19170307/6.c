#include<stdio.h>
int main()
{
    int a,b,c;
    char i='A',j='B',k='C';
    scanf("%d %d %d",&a,&b,&c);

    if(a==b)
    printf("%c\n",k);
    else if(a!=b&&a!=c)
    printf("%c\n",i);
    else
    printf("%c\n",j);

    return 0;
}
