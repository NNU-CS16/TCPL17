#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i,n=0;
    int s[100];
    scanf("%d %d %d",&a,&b,&d);
    c = a + b;
    while(c!=0)
    {
        s[n++]=c%d;
        c=c/d;
    }
    for(i=n-1;i>=0;i--)
        printf("%d",s[i]);
    if(n==0) printf("0");
    system("pause");
    return 0;
}


