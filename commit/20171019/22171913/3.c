#include<stdio.h>
int main()
{
    int n,i,k,m=1;
    printf("Please input:n");
    scanf("%d",&n);
    if(n<0)
    {
      printf("fu");
      n=-n;
    }
    k=n;
    while(k>9)
    {
	 printf(" ");
         m=m*10;
         k=k/10;
    }
    for(;m>0;)
    {
       i=n/m;
       switch(i)
       {
	   case 0:printf("ling");break;						           case 1:printf("yi");break;				                           case 2:printf("er");break;
											   case 3:printf("san");break;
											   case 4:printf("si");break;
										           case 5:printf("wu");break;				       		        case 6:printf("liu");break;
         case 7:printf("qi");break;
	 case 8:printf("ba");break;																	       case 9:printf("jiu");
																				          }
	   n=n%m;
	  m=m/10;
	 }
     return 0;
}
