#include<stdio.h>
int main ()
{
  int i,n;
  int mask=1;
  scanf("%d",n);
  if (n<0) 
     {
       printf("fu");
       n=-n;
     }
  while (n>9)
     {
       mask*=10;
       n/=10;
     }
  while (mask>0)
     {
      i=n/mask;
      switch(i)
      {
        case 0:printf(" ling");break;
        case 1:printf(" yi");break;
        case 2:printf(" er");break;
        case 3:printf(" san");break;
        case 4:printf(" si");break;
        case 5:printf(" wu");break;
        case 6:printf(" liu");break;
        case 7:printf(" qi");break;
        case 8:printf(" ba");break;
        default:printf(" jiu");
      }
      n=n%mask;
      mask=mask/10;
     }
   return 0;
}
