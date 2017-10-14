#include<stdio.h>
int main()
{
int x,y,z,a,b,c,d,X,Y;
printf("x= ");
scanf("%d",&x);
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
printf("c= ");
scanf("%d",&c);
X=abs(x);                                                
y=sqrt (X);
Y=4*a;
z=b*c;
d=Y/z;
if (y!=d)
   printf("y和d不相等\n");
else
   printf("y和d相等\n");
return 0;
}

                                                                      
