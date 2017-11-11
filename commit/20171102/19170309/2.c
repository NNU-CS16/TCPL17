#include<stdio.h>
int main()
{

int i=0,b,n;
char a[16]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
printf("输入一个10进制数: ");
scanf("%d", &n);
while(n>0)
  {
  b=n%16;
  a[i++]=b;
  n=n/16;
  }
for(i=i-1 ;i>=0;i--)
printf("%d", a[i]);
printf("\n");
return 0;
}
