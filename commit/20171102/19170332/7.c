#include<stdio.h>

int main()
{
int m,n;
printf("输入m和n的值(m>=n):");
scanf("%d%d",&m,&n);
printf("递归版本最大公约数：%d\n",GCD_recursive(m,n));
printf("循环（迭代）版本最大公约数：%d\n",GCD_iterative(m,n));
return 0;
}
int GCD_recursive(int m, int n) 
{ 
  int i,j;
    i=m%n;
    j=m/n;
     if(i=0)
       return n;
     else {
       while(i){
       m=n;
       n=i;
       i=m%n;
          }
    return n;
     }
}
int GCD_iterative(int m, int n)
{

int i;
i=m%n;
while(i)
{
  m=n;
  n=i;
  i=m%n;
}
return n;
}
