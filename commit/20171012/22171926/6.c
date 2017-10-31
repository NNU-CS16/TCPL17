<<<<<<< HEAD
#include<stdio.h>
int main()
{
int i,j,n=4;
scanf("%d",&n);
if(0<n<=13) 
{for(i=1;i<=n;i+=1) 
	{
	for(j=1;j<=n-i;j+=1)printf(" ");
	for(j=1;j<=2*i-1;j+=1)printf("*");
	printf("\n");
	}
for(i=n-1;i>=1;i-=1) 
        {
        for(j=1;j<=n-i;j+=1)printf(" ");
        for(j=1;j<=2*i-1;j+=1)printf("*");
	printf("\n");
        }}
else printf("wrong number\n");
=======
#include <stdio.h>
int main()
{
int N,i,j;
scanf("%d",&N);
for(i=0;i<N;i++) 

{for(j=0;j<N-i;j++)    

 printf(" ");

for(j=0;j<2*i+1;j++)    

printf("*");

printf("\n");      

}

for(i=N-2;i>=0;i--)

{

for(j=0;j<N-i;j++)

 printf(" ");

for(j=0;j<2*i+1;j++)

printf("*");

printf("\n");

}

>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
return 0;
}
