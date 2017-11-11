#include<stdio.h>
int LCM(int m,int n);
int main()
{
    int m,n;
    printf("Please input m(m>0)and n(n>0):");
    scanf("%d%d",&m,&n);
  
    LCM(m,n);

    return 0;
}

int LCM(int m,int n)
{
    int a=m,b=n;
    int k;
    while(n!=0)
         {
          k=m%n;
          m=n;
          n=k;
          }
     printf("%d\n",a*b/m);
}

