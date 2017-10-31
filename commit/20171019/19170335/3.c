#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	if(n<0)
	  {
	   printf("fu ");
	   n=-n;
	  }
	int a,b,c;

	a=1;
	b=n;

	while(b>=10)
             {
	      b=b/10;
	      a=a*10;
	     }
	do
	  {
	   int c=n/a;
	   switch(c)
		 {
	          case 0: printf("ling");break;
	          case 1: printf("yi");break;
	          case 3: printf("san");break;
		  case 4: printf("si");break;
	          case 5: printf("wu");break;
		  case 6: printf("liu");break;
		  case 7: printf("qi");break;
		  case 8: printf("ba");break;
		  case 9: printf("jiu");break;
		  case 2: printf("er");break;
                 }
	     if(a>=10)
	     printf(" ");
	     n=n%a;
             a=a/10;
	    }while(a>=1);
	    printf("\n");
	return 0;
}
	     








