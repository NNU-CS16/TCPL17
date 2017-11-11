 #include<stdio.h>
 #include<math.h>
 int is_prime(int n)
 {
    int i;
    for(i = 2; i <= sqrt(n); ++i)
    if (n % i == 0)
        break;
    if(i <= sqrt(n))
        return -1;
    else
        return 0;
 }

 int main()
 {
 int a,b = 0,n,f[1000];
 scanf("%d",&n);
 printf("%d\n",is_prime(n));
    for(a = 1; a <= 7920; ++a)
    {
       if (is_prime(a) == 0)
       {
         f[b] = a;
         ++b;
       }   
     else
        b == b;  
     if (b == 1000)
     break;
    }
 for(b = 100; b <= 1000; ++b)
    printf("%d ",f[b]);
    printf("\n");
 return 0;
 }
