#include <stdio.h>
int main()
{
    int a=0;  
    int num=0;  
    printf("print an integer：");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            a++;  
        }
    }
        if(a==0)
        {
        printf("%dyes\n", num);
        }
        else
        {
        printf("%dno\n", num);
        }
    return 0;
}
