#include<stdio.h>
int main()
{

int a,b,ch[100]={0};
scanf("%d %d",&a,&b);
for (int i=0;i<a;i++)
scanf("%d",&ch[(i+b)%a]);
for (int i=0;i<a;i++)
 {
  printf(" ");
  printf("%d",ch[i]);
 }
return 0;
}

