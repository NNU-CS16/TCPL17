#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
 int n = a<b?a:b;//min(a,b)
 while(n>=1)
		      {
    if(a%n==0 &&b%n==0)
    break;
  else n=n-1;
	    }
return n;


}
int main(void)
{  int A,B;
scanf("%d/%d",&A,&B);
printf("%d/%d\n", A/gcd(A, B),B/gcd(A,B));
return 0;
}
