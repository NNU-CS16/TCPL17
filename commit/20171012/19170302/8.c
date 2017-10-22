#include<stdio.h>
int main()
{
	   unsigned int m;unsigned int n;
	      printf("m=");
	         scanf("%u",&m);
		 if(m<0||m>153)
			 printf("Please input a right m.\n");
		 else
       			 printf("n=%x\n",m);
		          return 0;
}
