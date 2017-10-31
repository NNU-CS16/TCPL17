#include<stdio.h>
int main()
{
int i;
printf("please input line number");
scanf("%d",&i);
int n,m;
int a[20][20]={{1},{1,1}};
for(n=1;n<=i;n++)
{for(m=1;m<=n;m++)
a[n][1]=1;
a[n+1][m+1]=a[n][m]+a[n][m+1];
printf("%d  ",a[n][m]);
printf("\n");
}
return 0;
}
