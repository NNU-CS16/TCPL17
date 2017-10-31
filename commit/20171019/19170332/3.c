#include<stdio.h>
int main()
{
  int a,d;
  scanf("%d",&a);
  int k=1;
  if(a<0){
   printf("fu ");
   a=-a;}
   
   int t=a;
   while(t>9) 
    {  t/=10;
      k*=10;}
  do
   { d=a/k;
    switch(d)
    { case 1: printf("yi");break;
      case 0: printf("ling");break;
      case 2: printf("er");break;
      case 3: printf("san");break;
      case 4: printf("si");break;
      case 5: printf("wu");break;
      case 6: printf("liu");break;
      case 7: printf("qi");break;
      case 8: printf("ba");break;
      case 9: printf("jiu");break;
     
     }
    if(k>9) printf(" ");
    a%=k;
    k/=10;
   }
     while (k>0);    
     printf("\n");
     return 0;
     
}

