#include<stdio.h>
int main()
{
  char c;
  int i=0;
  while(scanf("%c",&c))
  {
    if(i==0&&c==' ') continue;
    if(c!=' '&&c!='.') i++;
    else if(c==' ')
    {
      if(i) printf("%d ",i);
      i=0;
    }
    else if(c=='.')
    {
      if(i) printf("%d",i);
      break;
    }
  }
  return 0;
}
