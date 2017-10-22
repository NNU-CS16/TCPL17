#include<stdio.h>
int main()
{


 int a,n;
 int sum=0,i=1,b=0; 

 printf("a=:");
 printf("n=:");
 scanf("%d %d", &a,&n);
 while(i<=n)
{ 
 b=b+a;
 sum=sum+b;
 a=a*10;
 i=i+1;
}
 printf("sum=%d\n",sum);
 return 0;




 
}





































