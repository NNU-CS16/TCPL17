#include<stdio.h>
#include<math.h>
int main()
{
     int n,i;
     printf("Please input n(n>3):");
     scanf("%d",&n);
     for (i=2;i<=sqrt(n);i++)
     if(n%i==0)
         break;
if(i<sqrt(n))
     printf("%d is not a prime\n",n);
else
     printf("%d is a prime\n",n);
return 0;
     
}
