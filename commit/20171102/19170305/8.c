#include<stdio.h>
int LCM(int, int);
int GCD_recursive(int m, int n);
void sort(int *,int *);
int main()
{
int m,n;
scanf("%d %d",&m,&n);
int *pm,*pn;
pm=&m;
pn=&n;
sort(pm,pn);
printf("%d\n",LCM(m,n));
return 0;
}


int LCM(int m, int n)
{
int q;
q=m*n/GCD_recursive(m,n);
return q;
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

