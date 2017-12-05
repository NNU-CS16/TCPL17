#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    int luo[20];
    printf("几个数要填充？");
    scanf("%d",&n);
    int i,j;
    printf("输入这%d个数",n);
    for(i=0;i<n;i++)
        scanf("%d",&luo[i]);
    int temp;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
        if(luo[j]>=luo[j+1])
    {
        temp=luo[j];
        luo[j]=luo[j+1];
        luo[j+1]=temp;
    }


    int k=0;
    int m=sqrt(n);
    int ha,li;
    if(m*m!=n)
       {
           while(n%m!=0)
            m--;
        ha=m;
        li=n/m;

       }

    else
    {
        ha=m;
        li=m;
    }
    int count=0;
    int ju[ha][li];

     for(i=0;i<ha;i++)
       {
        for(j=0;j<li;j++)
        ju[i][j]=0;
       }


    for(i=0;i<ha/2;i++)
    {
        for(j=0;j<li-i;j++)
        {
            if(ju[i][j]==0)
                ju[i][j]=luo[k++];

        }


        for(j=i+1;j<ha-i;j++)
        {
            if(ju[j][ha-1-i]==0)
                ju[j][ha-1-i]=luo[k++];

        }


        for(j=ha-i-1;j>i;j--)
        {
            if(ju[ha-i-1][j]==0)
                ju[ha-1-i][j]=luo[k++];
        }

        for(j=li-i-1;j>i;j--)
        {
            if(ju[j][i]==0)
                   ju[j][i]=luo[k++];

        }

        if(li%2==1&&ha%2==1)
            ju[ha/2][li/2]=luo[k];

        for(i=0;i<ha;i++)
            for(j=0;j<li;j++)
            {
            printf("%4d",ju[i][j]);
                count++;
            if(count%li==0)
                printf("\n");
            }

    }
    return 0;
}

