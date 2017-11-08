#include<stdio.h>
int k;
int LCM(int m,int n)
{
   int z;
   z=m%n;
   while(z)
   {
   m=n;
   n=z;
   z=m%n;
   }
   return k/n;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n); 
    k=m*n;
    if(m<n){
    m=m^n;
    n=n^m;
    m=m^n;}
    printf("%d",LCM(m,n));
    return 0;
} 

