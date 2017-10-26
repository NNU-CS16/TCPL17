#include<stdio.h>
int main()
{
  int i;
  printf("i=\n");
  scanf("%d",&i);
  if(i<0)
 {
   printf("fu");
   i=-1*i;
 }
   int t,mask=1;
   t=i;
   while(t>9)
   {t/=10;
   mask*=10;
   }
   int num;
   while(mask>0)
   {
    num=i/mask;
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
    i=i%mask;
    mask/=10;
   }
    //printf("i=%d,mask=%d\n",i,mask);
  }
  
