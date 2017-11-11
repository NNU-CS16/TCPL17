#include<stdio.h>
int is_prime(int n)
{
	int i,a;
	for(i=2;i<=n/2;i++)
	   {
	      if(n%i==0)
		break;
	   }
	if(i>n/2)
	  a=0;
	else
          a=-1;
	return a;
}
int main()
{
	int count=0;
	int i=2; 
	
        do{  if(is_prime(i)==0)
	       {
		  count++;
		  if(count>=100 && count<=1000)
	            printf("%d ",i);
	       }
             i++;
	   }while(count<=999);
        return 0;
}
	  
