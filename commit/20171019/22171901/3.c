#include<stdio.h>
int main()
{
   int n,i;
   int x,y=1;
   scanf("%d",&n);

   if(n<0)
    {
      n=-n;
      printf("fu");
    }
    x=n;
   
   while (x>9)
    {
      y=y*10;
      x=x/10;
    }              //判断位数
   
   for(;y>0;)
 {
      i=n/y;
    
    switch(i)
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
     default:printf("jiu");
    } 
     n=n%y;
     y=y/10;
  } 
    return 0;
}
   
 

  
  
