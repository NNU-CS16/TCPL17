#include <stdio.h>
int main ()
{
  int start;
  scanf("%d",&start);
  int end;
  end=start+4;
  int a,b,d;
  for(a=start;a<end;a++)
  {
    for(b=start;b<end;b++)
    {
      for(d=start;d<end;d++)
      {
        if(a==b&&b==d&&a==d)
        {
          printf("%d",a*100+b*10+d);
        }
        else
        {
          printf("%d\n",a*100+b*10+d);
        }
      }
    }
  }
 return 0;
}
