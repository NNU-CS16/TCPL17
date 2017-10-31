#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a<0)
  {
    printf("fu ");
    a=-a;
  }
  int m=a,n=1;
  while(m>=10)
  {
    m=m/10;
    n=n*10;
  }
  for(;n>=1;)
  {
    int b=a/n;
    switch(b)
    {
      case 0:printf("ling");break;
      case 1:printf("yi");break;
      case 2:printf("er");break;
      case 3:printf("san");break;
      case 4:printf("si");break;
      case 5:printf("wu");break;
      case 6:printf("liu");break;
      case 7:printf("qi");break;
      case 8:printf("ba");break;
      case 9:printf("jiu");break;
    }
    if(n>=10)
     printf(" ");
    a=a%n;
    n=n/10;
  }
  printf("\n");
  return 0;
}

