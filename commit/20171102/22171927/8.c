#include <stdio.h>
int LCM(int m,int n);

int main()
{
    int a,b;
    printf("Please input a,b:");
    scanf("%d%d",&a,&b);
    LCM(a,b);
    return 0;
}
 
int LCM(int m,int n)
{
    int a,b,c;
    int p=m;
    int q=n;
    if(q>p)
        a=q;
        q=p;
        p=a;
   do
   {
        b=p%q;
        p=q;
        q=b;
    }
    while(b!=0);
   
    if(p==1)
        c=m*n;
    else
        c=(m*n)/p;
    printf("%d\n",c);
}
   
    
