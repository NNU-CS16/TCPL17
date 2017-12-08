#include<stdio.h>
int add(int n1, int n2)
{        
    int sum，n1,n2;
    int carry;
    while (true)
    {
        sum = n1^n2;
        carry = (n1&n2) << 1;
        n2 = carry;
        n1 = sum;
        if (n2 == 0)
        {
            break;
        }
    return sum;
    }
}
int main()   
{
printf("请输入n1，n2")；
scanf("%d%d\n",&n1,&n2);
add(int n1, int n2)；
printf("%d\n",sum);
}    

