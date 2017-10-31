#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,t,s,a=-1,temp=-1;
    char c;
    scanf("%d %c",&n,&c);
    while(temp<=n)
    {
        s= n-temp;
        a+=2;
        temp+=2*a;
    }
    a-=2;
    t=(a-1)/2;
    for(i=0;i<a;i++)
    {
        for(j=0;j<t-abs(i-t);j++)
            printf(" ");
        for(j=0;j<abs(i-t)*2+1;j++)
            printf("%c",c);
        printf("\n");
    }
    printf("%d\n",s);
    system("pause");
    return 0;
}



