#include<stdio.h>
int main()
{
  int i,p,s;
  
  for(i=2,p=1,s=1;i<=10;i++)
  {
    p*=i;
    s+=p;
  }

  printf("1!+2!+3!+...+10!=%d\n",s);

  return 0;
}
