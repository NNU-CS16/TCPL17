#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c, i,j;
printf("请输入a,b,c的值\n");
scanf("%d %d %d",&a,&b,&c);
i=pow(a,b);
j=i%c;
printf("%d",j);
return 0;
}

