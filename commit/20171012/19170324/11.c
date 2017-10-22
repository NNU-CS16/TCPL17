#include<stdio.h>
 void print(int,int,int,int);
 int back(int,int,int);
 int main()
 {
 int n;
 scanf("%d",&n);
 print(n,n+1,n+2,n+3);
 print(n+1,n,n+2,n+3);
 print(n+2,n,n+1,n+3);
 print(n+3,n,n+1,n+2);
 return 0;
 }
 
 void print(int a,int b,int c,int d)
 {
 printf("%d %d %d %d %d %d\n",back(a,b,c),back(a,b,d),back(a,c,b),back(a,c,d),back(a,d,b),back(a,d,c));
 return ;
 }
 
 int back(int a,int b,int c)
 {
 return a*100+b*10+c;
 }
