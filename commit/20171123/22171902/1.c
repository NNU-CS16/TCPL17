 #include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("几个奇数呢？");
    scanf("%d",&n);
    int i,j;
    int sum=0;
    int k=1;

    for(i=0;i<n;i++)
    a[i]=k++;//数组中储存自变量。

    int b;
    for(i=0;i<n;i++)
    {
    b=i+1;
        for(j=b;j>0;j--)
        {
        if(b%j==0&&j%2==1)
            break;
        }
    a[i]=j;
    printf("%d",a[i]);
        sum+=a[i];
    }

	for(i=0;i<n-1;i++)
    {
        printf("f(%d)+",i+1);
    }
        printf("f(%d)=",n);
        printf("%d",sum);

        return 0;

}

