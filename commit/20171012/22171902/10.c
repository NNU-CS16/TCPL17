#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a3,a2,a1,a0;
	float a,b;
	float i=0.01;
	float y1,y2,y=0;
	float x=(a+b)/2; 
	scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
	scanf("%f%f",&a,&b);
	while((b-a)>=i)
	{
	y1=a3*pow(a,3)+a2*pow(a,2)+a1*a+a0;
	y2=a3*pow(b,3)+a2*pow(b,2)+a1*b+a0;
	y=a3*pow(x,3)+a2*pow(x,2)+a1*x+a0;
	
	
		if(y==0)
		break;
		
		  else if(y*y2<0)
		      {
			a=(a+b)/2;
		      }
		  else if(y*y1<0)
		      {
			b=(a+b)/2;
		       } 	
		  
                  }
	      	printf("%.2f",(a+b)/2);
	return 0;
		}
	
		 
	
			
			
			
			
		

	
