#include <stdio.h>
void triangle_judge(int a, int b, int c){
	
	if(a+b>c&&b+c>a&&a+c>b&&a==b==c)
	printf("It is an equilateral triangle.\n");
	else if(a+b>c&&b+c>a&&a+c>b&&(a==b||b==c||a==c))
	printf("It is an isosceles triangle.\n");
	else if(a+b>c&&b+c>a&&a+c>b)
	printf("It is a common triangle.\n");
	else printf("It is not a triangle.\n");
	
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	triangle_judge(a,b,c);
	return 0;
}
