#include<stdio.h>
int main()
{
    int i=1,sum;
    
    do
{
    sum=i*(i+1)*(i+2)+sum;
    i=i+3;

}   
    while(i<=97);
    printf("sum=%d\n",sum);
    return 0;
}
