 #include<stdio.h>
int fun(int n,int k);
int main()
{
 int n,k;
 scanf("%d %d",&n,&k);
 printf("C%d%d=%d",n,k,fun(n,k));
}

fun(int n,int k)
{

    if(n==k)
    return 1;

    else if(k==0)
    return 1;
    else
    return(fun(n-1,k-1)+fun(n-1,k)); 

}

