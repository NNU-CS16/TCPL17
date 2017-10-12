#include<stdio.h>
unsigned setbits(unsigned x,int n,int p,unsigned y)

{        
return x&~(~(~0 << n)<<(p+1-n))|(y&~(~0 << n))<<(p+1-n);
}

int main()

{
unsigned x,y;
int n,p,A;
printf("x is");
scanf("%d",&x);
printf("n is");
scanf("%d",&n);
printf("p is");
scanf("%d",&p);
printf("y is");
scanf("%d",&y);
A=setbits(x,n,p,y);
printf("%d",A);
return 0;
}




















