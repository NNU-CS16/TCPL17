#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,i;
 int d;
 printf("input a b c:\n");
 scanf("%d %d %d",&a,&b,&c);
 if(b>1)
	 
 {       d=a;
	 for(i=0;i<b-1;i++)
	 d=(d*a)%c;
 printf("%d^%d %% %d = %d\n",a,b,c,d);}
 else
 {	 d=a%c;
 printf("%d^%d %% %d = %d\n",a,b,c,d);}
 return 0;}

