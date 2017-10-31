#include <stdio.h>
int main()
{
	int number,temp=7,a=3;
	char c;
	scanf("%d %c",&number,&c);

	for(;;)
	{
	    if(number>=temp)
	    {
		if(number<(temp+2*(a+2))) break;
		if(number==(temp+2*(a+2)))
		  {
			temp=(temp+2*(a+2));
			a+=2;
			break;
		  }
		if(number>(temp+2*(a+2)))
		  {
			temp=(temp+2*(a+2));
			a+=2;
		  }
	    }
	}

	int j,i,k;
	for(j=a/2+1;j>=1;j--)
	{
	   for(k=1;k<=a/2-j+1;k++)
	      printf(" ");
	   for(i=1;i<=2*j-1;i++)
	      printf("%c",c);
	   printf("\n");
	}

	for(j=2;j<=a/2+1;j++)
	{
	   for(k=1;k<=a/2-j+1;k++)
	      printf(" ");
	   for(i=1;i<=2*j-1;i++)
	      printf("%c",c);
	   printf("\n");
	}

	printf("%d\n",number-temp);

	return 0;
}
