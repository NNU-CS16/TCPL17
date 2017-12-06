#include<stdio.h>
int f(int n);

int main()
{
        int n,sum=0;
        scanf("%d",&n);
        while(n>0)
        {
                sum+=f(n);
                n=n-1;
        }

        printf("%d\n",sum);
        return 0;
}
                        
int f(int n)
{
        int i;
        for(i=n;i>=1;i--)
        {
                if(n%i==0&&i%2!=0)
                        return i;
        }
}
