#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
	if(a+b>c && a+c>b && b+c>a)
	  {
	    if(a==b && b==c)
	       printf("dengbian");
	    else if(a==b||b==c||a==c)
		   printf("dengyao");
	    else printf("putong");
	  }


}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	triangle_judge(a,b,c);
	return 0;
}
