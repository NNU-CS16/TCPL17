#include<stdio.h>
void printstar(int n,int N)
{
int j;
for (j=0;j<N-n;j++) printf(" ");
for (j=0;j<2*n-1;j++)   printf("*");
printf("\n");
}
int main()
{
int N,n,g;
scanf("%d",&N);
for (n=1;n<23;n++) if(N<n*n) {n--;break;}
for (g=n;g>=1;g--) printstar(g,n);
for (g=2;g<=n;g++) printstar(g,n);
return 0;
}
