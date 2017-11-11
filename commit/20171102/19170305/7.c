#include<stdio.h>
int GCD_recursive(int,int);
int GCD_iterative(int,int);
void sort(int *,int *);
int main()
{
int m,n;
int *pm,*pn;
pm=&m;
pn=&n;
scanf("%d %d",&m,&n);
sort(pm,pn);
printf("用递归得到的结果是%d\n",GCD_recursive(m,n));
printf("用循环得到的结果是%d\n",GCD_iterative(m,n));
return 0;
}

int GCD_recursive(int m, int n)
{
int temp;
if(m%n==0)
return n;
else
{
temp=m;
m=n;
n=temp%m;
return GCD_recursive(m,n);
}
}

int GCD_iterative(int m, int n)
{
int x[50];
int i=0;
x[0]=m;
x[1]=n;
while(x[i]%x[i+1]!=0)
{
x[i+2]=x[i]%x[i+1];
i++;
}
return x[i+1];
}

void sort(int *pm,int *pn)
{
int temp;
if(*pm<*pn)
{
temp=*pm;
*pm=*pn;
*pn=temp;
}
}
