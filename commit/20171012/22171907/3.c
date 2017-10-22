#include<stdio.h>
int main()
{
    int a,b,n,i=0,s=0;

    printf("请分别输入a值及求和次数");
    scanf("%d %d",&a,&n);

    for(b=0;i<n;i+=1)
{
    b=b*10+a;
    s+=b;
}
    printf("%d\n",s);
  
    return 0;
}
