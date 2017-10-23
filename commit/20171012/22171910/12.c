#include<stdio.h>
int main()
{
  int a,b,x;
  scanf("%d/%d",&a,&b);
  if(a==b) printf("1/1\n");
  else
  {
    for(x=1;x<=(a>b?b:a);x++)
  {
    if(a%x==0&&b%x==0)     
    {
       a=a/x;
       b=b/x;
     }
   }
  printf("%d/%d",a,b);
  }
   return 0;
}

