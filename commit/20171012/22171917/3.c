#include<stdio.h>
int main()
{
    int a=3,n=10,x=0,y=0;
    printf("y=");
    scanf("%d%d%d%d",&a,&n,&x,&y);
    do
    {
      x=x+a;
      a=a*10+3;
      y++;
    }while(y<=10);
    printf("x=%d\n",x);
    return 0;
}

     
       
       
      
