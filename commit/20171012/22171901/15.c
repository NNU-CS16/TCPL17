#include<stdio.h>
void f(int x)
{
    int y;
    if(x!=0)
    {
     y=x%2;
     f(x>>1);
     printf("%d",y);
     }
}

int main()
{
  int x,y,z;
  scanf("%d",&x);
  
  if(x>0)
  {
    f(x);
  }
   else
    printf("%d",x);
 
  printf("\n");
  printf("%o\n",x);
  printf("%x\n",x);

  return 0;
}

