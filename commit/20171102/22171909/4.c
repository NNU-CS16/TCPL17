 #include<stdio.h>
 int count1_in_bin(int n)
 {
    int i[8]={0},b,c=0,d;
    b=0;
    while (b<8)
    {
        if(n%2==0)
           d=0;
        else
           d=1;
           i[b]=d;
           n=n/2;
           b++;
 }
    for(b=7;b>=0;b--)
    {
        if(i[b]==0)
           c=c;
        else
           c=c+1;
    }
    return c;
 }
 int main()
 {
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
 }
