#include<stdio.h>
int main()
{
	 int i=2;
	 int iSum=0;
	 for(i=2;i<=100;i+=2)
        {
		iSum += i;
	}
	 printf("2+4+6+...+100=:%d\n",iSum);
	 return 0;
}
