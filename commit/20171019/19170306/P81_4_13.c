#include<stdio.h>
#include<math.h>
int  sushu( int );
int main()
{
int number,i;
printf("the number is:");
scanf("%d",&number);
for (i=2;i<=sqrt(number);i++)
		if (number%i==0)
		{
		printf("no\n");return 0;		
		}
printf("yes\n");
return 0;
}
