#include<stdio.h>
#include<string.h>
void print_hex(int a);


int main()
{
    int a;
    scanf("%d",&a);
    print_hex(a);
    return 0;
}


void print_hex(int a)
{
    int x,i=0;
    char num[10];
    while(a!=0)
    {
        num[i]=a%16;
        a=a/16;
        i++;
    }
    x=i-1;
    i--;
    while(i>=0)
    {
        if ((int)num[i]>9){
        switch(num[i])
        {
            case 10:num[i]='a';break;
            case 11:num[i]='b';break;
            case 12:num[i]='c';break;
            case 13:num[i]='d';break;
            case 14:num[i]='e';break;
            default:num[i]='f';
        }}
        i--;
    }
    i=x;
    while (i>=0)
    {
        if ((int)num[i]>9) printf("%c",num[i]);
        else printf("%d",num[i]);
        i--;
    }
    printf("\n");
}
