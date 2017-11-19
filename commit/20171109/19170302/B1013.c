#include<stdio.h>
#include<math.h>

int main()
{
    int m,n,flag=0;
    int i,j,num=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
            for(j=2;j<=sqrt(i);j++)
            {
                    if(i%j==0)
                      flag=1;                                                            
            if(flag)
            {       num++;
                    if(num%10!=0)
                    printf("%d ",i);
                    else
                            printf("%d\n",i);
            }
            }
    }
    printf("\n");
    return 0;
}

