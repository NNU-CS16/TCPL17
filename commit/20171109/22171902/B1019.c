#include<stdio.h>
int temp(int *x,int *y);
int main()
{
    int a,b,c;
    int thou,hun,ten,ge;
    printf("输入一个四位数：");
    scanf("%d",&a);

     while(b-c!=6174)
    {
    thou=a/1000;
    hun=(a%1000)/100;
    ten=((a%1000)%100)/10;
    ge=a%10;

    if(thou==ten&&hun==ten&&ten==ge)
       {
        printf("%d -%d = 0000",a,a);
        break;
       }
        temp(&thou,&hun);
        temp(&thou,&ten);
        temp(&thou,&ge);
        temp(&hun,&ten);
        temp(&hun,&ge);
        temp(&ten,&ge);

    b=thou*1000+hun*100+ten*10+ge;
    c=ge*1000+ten*100+hun*10+thou;
    printf("%d - %d = %d\n",b,c,b-c);
    a=b-c;
    }

}

int temp(int *x,int *y)
{
    int temp;
        if(*x<*y)
        {
        temp=*x;
        *x=*y;
        *y=temp;
        }
}

