 #include<stdio.h>
 int GCD_recursive(int m,int n)
 {
    if (m%n==0)
    return n;
    else
    return GCD_recursive(n,m%n);
 }

 int GCD_iterative(int m,int n)
 {
    int c;
    while (c!=0)
    {
        c=m%n;
        m=n;
        n=c;
    }
 return m;
 }

 int main()
 {
 int m,n;
 scanf("%d %d",&m,&n);
 printf("%d\n",GCD_recursive(m,n));
 printf("%d\n",GCD_iterative(m,n));
 return 0;
 }
