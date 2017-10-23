#include<stdio.h>
<<<<<<< HEAD
int main ()
{
	long int  i,a=1, sum=0;
	for(i=1;i<=10;i++)	
	{
	 sum=sum+a;
	 a=a*(a+1);
	}
	printf("the value of 1!+2!+3!+...+10! is:%ld\n",sum);

	return 0;
}	
=======
int main()
{
	int sum=0,a=1,i;
	for ( i=1;i<=10;i++)
     {	
	a=a*i;
	sum+=a;
        printf("the sum of 1!+2!+3!...+10! is %d\n",sum);
     }
	return 0;
}
>>>>>>> 7fd41aba40d2ff457ddfc4eed172e7a4b923a49b
