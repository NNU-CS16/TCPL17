 #include<stdio.h>
 int fac_bit_count(int n)
 {
    int i,a=0;
    double fac=1.0;
    for (i=1;i<=n;++i)
         fac*=i;
    while (fac>=1)
    {
       fac/=10;
       a+=1;
    }
    return a;
 }
 int main()
 {
 int n;
 scanf("%d",&n);
 printf("%d\n",fac_bit_count(n));
 return 0;
 }
