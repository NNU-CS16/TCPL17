#include<stdio.h>
#include<math.h>
int main()
{
float  r1,p1,r2,p2,A,B,a1,b1,a2,b2;
printf("输入在一行中依次给出两个复数的R1, P1, R2, P2:");
scanf("%f%f%f%f",&r1,&p1,&r2,&p2);
a1=r1*cos(p1);
b1=r1*sin(p1);
a2=r2*cos(p2);
b2=r2*sin(p2);
A=a1*a2;
B=b1*b2;
if(B<0){
B=-B;}
printf("%.2f-%.2fi\n",A,B);
return 0;
}

