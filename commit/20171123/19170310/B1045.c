#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num=0,i=0,max=0,count=0;
    int a[100005]={0},b[100005]={0},m[100005]={0};
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(a,a+num);
    for(i=0;i<num;i++)
    {
        if(b[i]>max) 
            max=b[i];
        if(a[i]==b[i]&&a[i]==max) 
            m[count++]=a[i];
    }
    printf("%d\n",count);
    if(count==0) 
        printf("\n");
    for(i=0;i<count;i++)
    {
        if(i!=count-1)
            printf("%d",m[i]);
        else
            printf("%d",m[i]);
    }
    return 0;
}
