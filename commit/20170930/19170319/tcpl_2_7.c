#include<stdio.h>
int invert(int x,unsigned int p,unsigned int n)
{
    int a=0;
    int i;
    for(i=0;i<n;i++)
        a|=1<<i;
    a=a<<((p+1)-n);
    return x^a;
}
int  main()
{
    int i;
    i=invert(65,2,3);
    printf("%d\n",i);
    return 0;

}
