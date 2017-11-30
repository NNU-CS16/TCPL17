#include<stdio.h>
#include<string.h>
int main()
{
    char A[5]={0},B[5]={0};
    printf("输入第一个整数：");
    gets(A);
     printf("输入第二个整数：");
    gets(B);
    char c[6]={0};
    int yu=0;
    int i;
    for(i=3;i>=0;i--)
    {
           if(A[i]+B[i]-96+yu<10)-
            {
            c[i+1]=A[i]+B[i]+yu-96;
            yu=0;
            }
            else
            {
            c[i+1]=A[i]+B[i]+yu-106;
            yu=1;
            }
    }
    c[0]=yu;
    for(i=0;i<=4;i++)
        printf("%d",c[i]);
    return 0;
}



