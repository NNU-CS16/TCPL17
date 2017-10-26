#include<stdio.h>
int main()
{
 int a,b;
 int i,c,d;
 printf("请输入分数a/b:");
	scanf("%d/%d",&a,&b);
 if(a==b)
 {
 printf("1/1");
 return 0 ;
  } 
if (a>b) {i=b;}
else {i=a;}
  for (i>=1;i--;)
  { c=a%i;d=b%i;
   if(c==0 && d==0) break;}
  printf("%d/%d\n",a/i,b/i);  
 return 0;
}
