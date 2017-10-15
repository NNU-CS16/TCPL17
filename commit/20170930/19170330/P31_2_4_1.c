#include<stdio.h>
#include<math.h>
int main()
{
	float x,total;
	scanf("%f",&x);
        total=pow(x,3)+2*pow(x,2)+3*x+1;
        printf("%.*f",3,total);
   
return 0;
}
