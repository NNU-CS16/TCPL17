#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  if (n<0)
   {
    printf("fu ");
    n=-1*n;
   }

  int i,j;
  i=n,j=1;
  while (i>9)
   {
     i=i/10;
     j=j*10;
   }

  int k;
  while (j>0)
   {
   k=n/j;
     switch(k)
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
     if (j>9)
      {
        printf(" ");
      }
      n=n%j;
      j=j/10;
    }
    printf("\n");
    return 0;
}
