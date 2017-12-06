#include<stdio.h>
int add(int n1, int n2);
int main()
{

int n1,n2;
scanf("%d %d", &n1,&n2);
printf("%d\n", add(n1,n2));
return 0;
}
int add(int n1, int n2)
{
int t;
while(n2)
 {t=n1^n2;
  n2=(n1&n2)<<1;
  n1=t;}
return n1;
}
