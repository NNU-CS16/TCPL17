#include<stdio.h>
int main()
{
  char c;
  int i=0;
  while(1)
  {
    scanf("%c",&c);
    ++i;
    if(c==' ')
    {
      i-=1;
      printf("%d ",i);
      i=0;
      continue;
    }
    if(c=='.')
    {
      i-=1;
      printf("%d ",i);
      break;
    }
    
  }
  return 0;
}
