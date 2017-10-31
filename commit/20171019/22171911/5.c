#include<stdio.h>
int main( )
{
  char a[100];
  int i,n;
  gets(a);
  for(i=0;a[i]!='.';i++)
  {
    if(a[i]=' ')
    {n=0;
      printf("%d",n);}
    else n++;}
    printf("%d",n);
    return 0;
}
