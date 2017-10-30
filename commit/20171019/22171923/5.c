#include<stdio.h>
int main()
{
  char n;
  int a=0,count=0;
  do
  {
    scanf("%c",&n);
    if(a==0&&n==' ')
    {
      continue;
    }
    if(a==0&&n=='.')
    {
      break;
    }
    if(n==' ')
    {
      if(count==0)
      {
        printf("%d",a);
      }
      else
      {
        printf("%d",a);
      }
     a=0;
     count++;
     continue;
    }
    if(n=='.')
    {
      if(count==0)
      {
        printf("%d",a);
      }
      else
      {
        printf("%d",a);
      }
      break;
    }
    a++;
  }
  while(n!='.');
  return 0;
}
