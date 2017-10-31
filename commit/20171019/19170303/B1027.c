#include<stdio.h>
int main()
{
 int n,c,i,d;
  int a=1,b=1;
  scanf("%d",&n);
  while(2*a*a-1<=n)
  {a++;}
a=a-1; 
  i=n-(2*a*a-1);
  for(d=a;d>=1;d--)
 {
  for(b=1;b<=a-d;b++)
    printf(" ");
  for(c=1;c<=2*d-1;c++)
    printf("*");
  printf("\n"); 
 }
  
for (d=2;d<=a;d++)
  {
   for(b=1;b<=a-d;b++)
     printf(" ");
   for(c=1;c<=2*d-1;c++)
     printf("*");
  printf("\n");
  }
    printf("%d\n",i);
  return 0;
}
