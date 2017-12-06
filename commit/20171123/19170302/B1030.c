#include <stdio.h>

int main()
{
        int n,p,i,j,k,temp,M,m,flag=0;
        scanf("%d%d",&n,&p);
        int str[n];
        for(i=0;i<n;i++)
                scanf("%d",&str[i]);
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-i;j++)
                        if(str[j]>str[j+1])
                        {
                                temp=str[j];
                                str[j]=str[j+1];
                                str[j+1]=temp;
                        }
        }
        for(i=n-1;i>=0;i--)
        {
                M=str[i];
                for(j=0;j<i;j++)
                {
                        m=str[j];
                        if(M<=m*p)
                        {
                                flag=1;
                                break;
                        }
                }
                if(flag)
                        break;
        }
        if(flag)
                printf("%d\n",i-j+1);
        return 0;
}



