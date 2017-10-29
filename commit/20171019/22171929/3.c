#include <stdio.h>
#include <string.h>
 
int main()
{
    char *s[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int n,i,t,m;
    while(scanf("%d",&n)!=EOF)
    {
        int count[100]={0};
        if(n<0)
        {
            printf("fu ");
            n=-n;
        }
        else if(n==0)
        {
            printf("ling\n");
            continue;
        }
        for(i=0;n>0;i++)
        {
            t=n%10;
            count[i]=t;
            n=n/10;
            m=i;
        }
        printf("%s",s[count[m]]);
        for(i=m-1;i>=0;i--)
        {
            printf(" %s",s[count[i]]);
        }
        printf("\n");
    }
    return 0;
}
