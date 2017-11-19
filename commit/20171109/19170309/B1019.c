#include<stdio.h>
int pai1(int n);
int pai2(int n);
int main()
{

int n,x,y;
scanf("%d", &n);
x=pai1(n);
y=pai2(n);

while(n!=6174)
  {printf("%d-%d=%d\n", x,y,n);
   n=x-y;
   x=pai1(n);
   y=pai2(n);}
printf("%d-%d=%d\n", x,y,x-y);
return 0;
   
}

int pai1(int n)
{
int i,j,t,x;
int a[4];
for(i=0;i<4;i++)
   {a[i]=n%10;
    n/=10;}
for(j=0;j<4;j++)
 {for(i=0;i<4;i++)   
  {if(a[i]<a[i+1])
       {t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;}}}
x=1000*a[0]+100*a[1]+10*a[2]+a[3];
return x;
}
int pai2(int n)
{
int i,j,t,y;
int a[4];
for(i=0;i<4;i++)
   {a[i]=n%10;
    n/=10;}
for(j=0;j<4;j++)
 {for(i=0;i<4;i++)
  {if(a[i]<a[i+1])
       {t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;}}}
y=1000*a[3]+100*a[2]+10*a[1]+a[0];
return y;
}

