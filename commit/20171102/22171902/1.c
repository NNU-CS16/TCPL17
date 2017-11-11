#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
    int a,b,c;
   triangle_judge(a,b,c);
    return 0;
}

void triangle_judge(int a,int b,int c)
{
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c&&a+c>b&&b+c>a)
	{ 	  
		 if(a>0&&b>0&&c>0)
  			{
  			  if(a!=b&&b!=c&&c!=a)
  			   printf("普通三角形");
  			  if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b))
   			   printf("等腰三角形");
 		     	  if(a==b&&a==c)
   			   printf("等边三角形");
   			 }
	  }
	 
}

