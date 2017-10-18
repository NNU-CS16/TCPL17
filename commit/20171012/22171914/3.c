#include <stdio.h>
int main()

{int a,n,i;
 long sun=0,x=0;
scanf("%d%d",&a,&n);    
 for(i=0;i<=n;i++)
 {x=x*10+a;
  sun+=x;
 }
 printf("%d",sun);
 return 0;
}
 
