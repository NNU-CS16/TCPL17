#include<stdio.h>
#include<math.h>
int main()
{
int N,M;
char X;
char x;
printf("第1行输入N ( 1<=N<=100)、M（M>=0）；第2行输入N个整数，之间用空格分隔:");

scanf("%d%d%[^\n]",&N,&M,&X);
x=X>>M;
printf("%s\n",x);
return 0;
}


