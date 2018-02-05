#include <stdio.h>
#include <string.h>

int Sum( char str[] );
void duqu( int num );

int main()
{
    char str[100];
    scanf("%s", str);
    int flag = Sum( str );

    int arr[50],len = 0; //这个数组是用来存放相加之和的数的各位数，存放的时候是从各位数向前存放的  个位数懂？
    while ( flag!=0 )
    {
        arr[len] = flag%10;
        flag/=10;
        ++len;
    }

    for ( ; len!=0 ; --len)
    {
        duqu( arr[len-1] );
        if ( len!=1 )
            printf(" ");
    }

    printf("\n");
    return 0;
}


int Sum( char str[] )
{
    int flag = 0;
    for ( int i = 0; i<strlen( str ); ++i )
        flag = flag+str[i]-'0';
    return flag;
}
//这是用来计算各位数相加之和的函数，返回值是相加之和  字符串里面的数字相加需要件去'0'字符串是用ASCII 吗计算的  你把他看成是ASCII吗就好了
void duqu( int num )
{
    switch ( num )
    {
        case 0 :printf("ling");break;
        case 1 :printf("yi");break;
        case 2 :printf("er");break;
        case 3 :printf("san");break;
        case 4 :printf("si");break;
        case 5 :printf("wu");break;
        case 6 :printf("liu");break;
        case 7 :printf("qi");break;
        case 8 :printf("ba");break;
        case 9 :printf("jiu");break;
    }
}
