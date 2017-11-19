 #include<stdio.h>
 int GCD_recursive(int m,int n)
 {
    if (m%n==0)
    return n;
    else
    return GCD_recursive(n,m%n);
 }

 int LCM(int m,int n)
 {
 return m*n/GCD_recursive(m,n);
 }

 int main()
 {
 int m,n;
 scanf("%d %d",&m,&n);
 printf("%d\n",LCM(m,n));
 return 0;
 }
