#include<stdio.h>
#include<math.h>
int bin_insert(int n,int m,int j,int i);
int main()
{
    int m,n;
    printf("请输入较大的n：");
    scanf("%d",&n);
    printf("请输入较小的m：");
    scanf("%d",&m);
    int i,j;
    printf("输入从（）位到（）位");
    scanf("%d %d",&i,&j);

    int k=bin_insert(n,m,j,i);
 
    return 0;
}


int bin_insert(int n,int m,int j,int i)
{
    int sert[100];//插入后n的二位数；
    int n1[100];//插入前n的二维数
    int m1[100];//暂时储存要插入的m的二位数
    int n2[100];//排序正常后的二位数
    int m2[100];//排序正常后的额位数
    int t1=n,t2=m;
    int c=0,c1=0,c2=0,cn=0,cm=0;
    int k;
    int t3,t4,t;
    int sum=0;
    while(t1)
    {
        n1[c++]=t1%2;
        t1/=2;
    }
    c1=c-1;
    t=c-1;
    for( ;c1>=0;c1--)
        n2[cn++]=n1[c1];
    for(c=0;c<cn;c++)
        printf("%d",n2[c]);

    c=0;//c清零
    while(t2)
    {
        m1[c++]=t2%2;
        t2/=2;
    }

    c2=c-1;
    for( ;c2>=0;c2--)
        m2[cm++]=m1[c2];

    c=0;
    for(k=0;k<t-j+1;k++)
        sert[k]=n2[c++];
    c=0;
    for(k=t-j+1;k<t-i+2;k++)
        sert[k]=m2[c++];

    for(k=t-i+2;k<t+1;k++)
        sert[k]=n2[k];

    for(c=0;c<t+1;c++)
        printf("%d",sert[c]);

    for(c=0;c<t+1;c++)
    {
        if(sert[c]==1)
            sum+=pow(2,t-c);
    }
    printf("%d",sum);

    return 0;

}

