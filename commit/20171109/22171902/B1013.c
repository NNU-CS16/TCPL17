#include<stdio.h>
void fun(int M,int N);
int main()
{
    int M,N;
    printf("please input the value of M,N(M<=N):");
    scanf("%d %d",&M,&N);

    if(M==1&&N==1)
    printf("2");
    else if(M==1&&N==2)
    {
        printf("2 3 ");
    }
    else if(M==2&&N!=2)
    {
        printf("3 ");
        fun(3,N);
    }
    else if(M==2&&N==2)
    {
        printf("3 ");
    }
    else if(M==1&&N>2)
    {
        printf("2 3 ");
        fun(3,N);
    }
    else
    {
        fun(M,N);
    }

}

 void fun(M,N)
{
        int n,i;
        int c=2,b=0;
        for(n=3; ;n++)
        {
            for(i=2;i<=n-1;i++)
            {
                if(n%i==0)
                break;
            }
            if(i>=n)
           {
             c++;
             if(c>=(M+1)&&c<=(N+1))
              {
                 printf("%d ",n);
                 if(c==15)
               printf("\n");
                if(c>15&&(c-5)%10==0)
                     printf("\n");
               }
             if(c>(N+1))
                break;
             }


        }
}


