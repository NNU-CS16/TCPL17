#include<stdio.h>
#include<math.h>
int main()
{
int a;
scanf("%d",&a);
if(a<0)
printf("fu");
a=-a;

int i=a,n=1; 
if(a==0)
printf("ling");


  while(i>9)
   {
    i/=10;
    n*=10;
   }
  do
   {
    int b=a/n;
    switch(b)
     {
      case 0:printf("ling");

break;  
      case 1:printf("yi");

break;
      case 2:printf("er");

break;  
      case 3:printf("san");

break;  
      case 4:printf("si");
break;
      case 5:printf("wu");

break;  
      case 6:printf("liu");

break;  
      case 7:printf("qi");
break;
      case 8:printf("ba");

break;  
      case 9:printf("jiu");

break;
     }
    if(n>9)
    printf(" ");
    a%=n;
    n/=10;
   }

 while(n>0);
 printf("\n");
        return 0;
}
    












     














