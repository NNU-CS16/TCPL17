#include<stdio.h>
int main ()
{
	  int x,a,b,c;
	    printf("请输入一个三位数：");
	      scanf("%d",&x);
	        a=x%10;
		c=x/100;
	       b=(x-100*c)/10;
		 
		   if(a==0)
		   { 
			if(b!=0)        printf("%d的倒序为%d%d\n",x,b,c);
		     
		 else
					    printf("%d的倒序为%d\n",x,c);
		   }	 
	else
		    		printf("%d的倒序为%d%d%d\n",x,a,b,c);
			  return 0;
}
