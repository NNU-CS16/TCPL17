#include<stdio.h>
 int a,b;
 int num[105];
 int i;
 int count=0;
 int main()
 {
  scanf("%d%d",&a,&b);
  a=a-b%a;
  for(i=0;i<a;i++)
 {
  scanf("%d",&num[i]);
 }
  for(i=b;i<a;i++)
{ 
   printf("%d",num[i]);
   ++count;
  if(count!=a)
 {
  printf(" ");
  }
  }
  for(i=0;i<b;i++)
 {
  printf("%d",num[i]);
  ++count;
  if(count!=a)
  {
   printf(" ");
}
}
  printf("\n");
}
