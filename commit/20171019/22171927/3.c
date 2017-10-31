#include<stdio.h>
int main()
{
  int N;
  printf("请输入N的值:");
  scanf("%d",&N);
  
  if(N<0)
{
   printf("fu");
   N=-1*N;
}

  int t,mask=1;
  t=N;
  while(t>9)
  {t/=10;
  mask*=10;
  }
  
  int num;
  while(mask>0)
  {
    num=N/mask;
    
    switch(num)
    {
      case 0:
          printf("ling");break;
      case 1:
          printf("yi");break;
      case 2:
          printf("er");break;
      case 3:
          printf("san");break;
      case 4:
          printf("si");break;
      case 5:
          printf("wu");break;
      case 6:
          printf("liu");break;
      case 7:
          printf("qi");break;
      case 8:
          printf("ba");break;
      case 9:
          printf("jiu");break;
    }
    
    if(mask>9)
    {
      printf(" ");
    }
    
    N=N%mask;
    mask/=10;
  }
  
 
}
