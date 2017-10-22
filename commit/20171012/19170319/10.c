#include <stdio.h>

#include <stdlib.h>

int main()

{

double a,b,a0,a1,a2,a3;

double t=0.001, m,f1,f2,n;

scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);

scanf("%lf%lf",&a,&b);

f1=a3*a*a*a+a2*a*a+a1*a+a0;

f2=a3*b*b*b+a2*b*b+a1*b+a0;

while(b-a>t)

{m=(a+b)/2;

f1=a3*a*a*a+a2*a*a+a1*a+a0;

f2=a3*b*b*b+a2*b*b+a1*b+a0;

n=a3*m*m*m+a2*m*m+a1*m+a0;

if(n==0)

{ printf("%0.2f",m);

return 0;

}

else if((n>0 && f1>0) || (n<0 && f1<0))

a=m;

else

b=m;

}

printf("%0.2f",(a+b)/2);

return 0;

}
