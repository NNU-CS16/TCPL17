#include<stdio.h>
 int main()
{
     int a,b,d;
     int n,i,c=0;
     char arr[1000];
     scanf("%d%d%d",&a,&b,&d);
        n=a+b;
       while (n!=0)
{
    i=n%d;
    arr[c]=i;
    c++;
    n=n/d;
}
  for(c=c-1;c>=0;c--)
  printf("%d",arr[c]);
  return 0 ;
}
