#include<stdio.h>
#include<math.h>
char *s="0123456789abcde"; /* 定义个字符串指针，用于输出 */
int INT[N];  /* 用于存放转换后的数据 */
void SWITCH(float a,int d)  /* 转换的函数 */
{
    int _int;
    int i=0,j;
    _int=a; /* 把小数部分去掉 */
    while(_int)
    {
        INT[i]=_int%d;/*存放数据，把该数值模以进制，其结果就是转换后的数值*/
        i++;
        _int/=d; /* 把该数值除以进制，得出整数部分，如果不为零，继续转换*/
    }
    for(j=i;j>=0;--j)
        printf("%c",*(s+INT[j])); /* 输出转换后的整数部分 */
    if(a-(int)a>0.0) /* 如果这个数值有小数部分，就进行下面的程序*/
    {
        i=0; /* 下标赋初值 */
        a-=(int)a; /* 得出小数部分 */
        while(a!=0.0)
        {
            INT[i]=(int)(a*d); /* 存入数据，该数值乘以进制，其整数部分就是转换后的数值*/
            a=(a*d)-(int)(a*d);/* 把整数部分去除，如果不为零，继续转换 */
            i++;
        }
        printf("."); /* 输出小数点 */
        for(j=0;j<i;++j)
            printf("%c",*(s+INT[j])); /* 输出小数部分 */
    }
    printf("\n");
}
int main(void)
{
    int n;
    float a;
    printf("input n a:\n");
    while((scanf("%d %f",&n,&a))!=EOF) /* 输入数值，第一个输入进制，第二个输入数值 */
        SWITCH(a,n); /* 当输入不为EOF时，进行转换 */
    return 0;
}





