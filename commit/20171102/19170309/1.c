#include<stdio.h>
void triangle_judge(int a, int b, int c); 
int main()
{

int a,b,c;
scanf("%d %d %d", &a,&b,&c);
triangle_judge(a,b,c);
return 0;
}

void triangle_judge(int a, int b, int c)
{

if (a==b&&b==c)
printf("等边三角形");
else if((a==b&&a+b>c&&a+c>b)||(a==c&&a+c>b&&a+b>c)||(b==c&&b+c>a&&b+a>c))
printf("等腰三角形");
else if(a+b>c&&a+c>b)
printf("普通三角形");
else
printf("Not right!");

}
