#include<stdio.h>
int GCD_itrative(int m,int n);
int main()
{
    int m, n;
    printf("Please input m(m>0)and n(n>0):");
    scanf("%d%d",&m,&n);

    GCD_itrative(m,n);
   
    return 0;
}

int GCD_itrative(int m,int n)
{
    int k=1;
    while(n!=0)
         {
          k=m%n;
          m=n;
          n=k;
         }
     printf("%d\n",m);
} 

