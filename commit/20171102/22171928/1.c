#include<stdio.h>
void triangle_judge(int a,int b,int c);

int main()
{
int a, b, c,t;   
scanf("%d%d%d",&a,&b,&c);
    if(a>b)
  {
	t = a; a = b; b = t;
  }
    if(b>c)
  {
	t = b; b = c; c = t;
  }  
        if ((a+b)>c)
    {
	  if((a*a+b*b)==(c*c))
	{
          printf("this is a right angled triangle");
        } 
          if((a*a+b*b)<(c*c))
        {
	  printf("this is a acute triangle");
    	}
          if((a*a+b*b)>(c*c))		  
        {
          printf("this is a obtuse triangle");
	}
        else 
        printf("this is not a triangle");
    }
   return 0;
} 	
