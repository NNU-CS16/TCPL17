#include <stdio.h>
void triangle_judge(int a,int b,int c);

int main()
{
    int m,n,p;
    printf("Please input m,n,p:");
    scanf("%d,%d,%d",&m,&n,&p);
    triangle_judge(m,n,p);
    return 0;
}  

void triangle_judge(int a,int b,int c)
{ 
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        if(a==b&&b==c)
            printf("等边三角形");
        else if((a==b)||(b==c)||(c==a))
            printf("等腰三角形");
        else
            printf("普通三角形");
    }
    else
        printf("不能构成三角形");
}
 
        
        
  

 




