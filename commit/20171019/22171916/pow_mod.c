#include<stdio.h>
#include<math.h>
int mod(int p,int q);
int main()
{
int a,b,c,x,y;
scanf("%d%d%d",&a,&b,&c);
x=pow(a,b);
y=mod(x,c);
printf("%d\n",y);
return 0;
  

}
int mod(int p,int q)
{
return p%q;
}
