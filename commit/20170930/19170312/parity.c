#include <stdio.h>
int main()
{
  int n;
  int flag;
  printf("please enter the number of n.\n");
  scanf("%d",&n);
  if(n%2==0)
    {flag=0;
    printf("%d\n",flag);
    }
  else
    {flag=1;
    printf("%d\n",flag);
    }
  return 0;
}
