#include<stdio.h>
#include<math.h>
int main()
{
  int  a,n;
  printf("输入a的值："); 
  scanf("%d", & a);
  printf("输入n的值：");
  scanf("%d", & n);
 
  int sum=0, p=0,q=0; 
  do
    {
    p+=a*pow(10,q);
    q++;
    sum=sum+p;
    }while(q<=n-1);

  printf("和为%d\n",sum);
  return 0;
}
