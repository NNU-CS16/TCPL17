#include <stdio.h>

void triangle_judge(int a, int b, int c)

{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a!=b&&a!=c&&b!=c)
			printf("Ordinary triangle\n");
		else if(a==b&&a==c&&b==c)
			printf("Equilateral triangle\n");
		else
			printf("isosceles trlangle\n");
	}
	else
		printf("can't make a triangle\n");

}
int main() 
{
	int x, y, z;
	scanf("%d%d%d",&x,&y,&z);
	triangle_judge(x,y,z);
	return 0;
}


