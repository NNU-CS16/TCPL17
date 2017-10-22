#include<stdio.h>
int main()
{
	int i,j,k;
	int A;
	int sum;
	int count=0;
	scanf("%d",&A);
	if(0<A&&A<=6)
		for(i=A;i<=A+3;i++)
		{
		 for(j=A;j<=A+3;j++)
		 	{
			 for(k=A;k<=A+3;k++)
			  { 
			        if(k!=i&&k!=j&&i!=j)
   			      {	printf(" %d",sum=i*100+j*10+k);
				count++;
				if(count%6)
				printf(" ");
				else
				printf("\n");}
			  }
			 }
	   printf("\n");
		        
		}
				
	return 0;
}	
