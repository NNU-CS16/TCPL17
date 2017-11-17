#include <stdio.h>
void triangle_judge(int a, int b, int c);
int main()
{
    int a, b, c;	
    printf("Please input a,b,c:");
	scanf("%d %d %d", &a, &b, &c);
	triangle_judge(a,b,c);
     return 0;	
}


void triangle_judge(int a,int b,int c)
{
    	
	if (a+b>c && a+c>b && b+c>a)//can be a triangle//
	{
        if (a==b || b==c || a==c)
	 {
		if (a==b && b==c) 
			printf("DB\n");
		else 
	        printf("DY\n");
	 }
	else printf("Normal triangle\n");
	}
        else 
	printf ("Can't be a triangle!\n");
}       
        //Define a function//


