#include<stdio.h>
int main()
{
int a,b,DA,DB,Pa,Pb,A1,B1,i,j;
printf("please input DA,DB");
char A,B;
printf("please input A,B(0<A,B<10^10)");
scanf("%d%d%d%d",&DA,&DB,&A,&B);


float c[10];
c[10]=(float)A;
int m;
for(m=1;m<=10;m++)
{if(c[m]==DA)a++;
for(i=1;i<=a;i++)
A1=A1*10+1;}
Pa=DA*A1;



float d[10];
d[10]=(float)B;
int n;
for(n=1;n<=10;n++)
{if(d[n]==DB)b++;
for(j=1;j<=b;j++)
B1=B1*10+1;}
Pb=DB*B1;



printf("%d",Pa+Pb);
return 0;
}
