#include<stdio.h>
void print_hex(int a)
{
 int b=0;
 int arr[100];
 int i=0;
 int m=0;
 char hex[16]={'0','1','2','3','4','5','6','7',
               '8','9','A','B','C','D','E','F'};
    while (a>0)
  {
  b=a%16;
  arr[i++]=b;
  a=(a-b)/16;
  }
for (i=i-1 ;i>=0 ;i--)
  {
 m=arr[i];
 printf("%c",hex[m]);
  }
}

int main()
{
printf("输入一个十进制整数:");
int a;
scanf("%d",&a);
print_hex(a);
printf("\n");
    return 0;
}
