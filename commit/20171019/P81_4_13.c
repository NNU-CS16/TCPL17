#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,m;
 double k; 
 printf("Please input n(n>3):");
 scanf("%d",&n);

 k=sqrt(n);

 for(i=2;i<k;i++) 
   m=n%i;
 if(m==0) printf("%d is not a prime number\n",n);
 else printf("%d is a prime number\n",n);  


 return 0;
}
