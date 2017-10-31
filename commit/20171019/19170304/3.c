#include<stdio.h>
#include<math.h>
void maxd(int b);

int main()
  {
   int  n,b;
   scanf("%d",&n);
   if(n<0) printf("fu ");
   maxd(b);
   printf("\n");
   return 0;
  }
  
  void maxd(int b)
  {
    int k;
    if(b==0) return;
    maxd(b/10);
    k=b%10;
    switch(k)
        {
        case 0 :printf("ling ");break;
        case 1 :printf("yi ");break;
        case 2 :printf("er ");break;
        case 3 :printf("san ");break;
        case 4 :printf("si ");break;
        case 5 :printf("wu ");break;
        case 6 :printf("liu ");break;
        case 7 :printf("qi ");break;
        case 8 :printf("ba ");break;
        case 9 :printf("jiu ");break;
        }
  }
   
    
