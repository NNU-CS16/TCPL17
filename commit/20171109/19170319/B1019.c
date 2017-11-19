#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ans=0;
void shenxu(int a[])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3 - i;j++)
        {
            if(a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
void jiangxu(int a[])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3 - i;j++)
        {
            if(a[j] < a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
int tomax(int num)
{
    int a[4] = {0};
    a[0] = num / 1000 % 10; 
    a[1] = num / 100 % 10; 
    a[2] = num / 10 % 10;
    a[3] = num % 10;
    jiangxu(a) ;
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}
int tomin(int num)
{
    int a[4] = {0};
    a[0] = num / 1000 % 10;
    a[1] = num / 100 % 10;
    a[2] = num / 10 % 10;
    a[3] = num % 10;
    shenxu(a) ;
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}
int main()
{
    int num;
    scanf("%d",&num);
    while (1)
    {
        printf("%d - %d = %d \n",tomax(num),tomin(num),tomax(num) - tomin(num));
        num = tomax(num) - tomin(num);
        if (num == 6174)
            break;
    }
    return 0;
}
