#include<stdio.h>
#include<math.h>
int main()
{
 float r1,p1,r2,p2;
 float a,b,c,d,A,B;
 scanf("%f %f %f %f",&r1,&p1,&r2,&p2);
 a=r1*(cos(p1));
 c=r2*(cos(p2));
 b=r1*(sin(p1));
 d=r2*(sin(p2));
 A=a*c-b*d;
 B=a*d+c*b;
 if(B<0)
 {
  B=-B;
  printf("%.2f-%.2fi\n",A,B);
 }
 else {printf("%.2f+%.2fi\n",A,B);}
 return 0;
}
