#include<stdio.h>
int main( )
{
int N,a,b,c,d,e,f,g;
  char m;
scanf("%d%c",N,m);  

b=2*a*a-1;
  for(a=1;b<=N;a++)
  {
   for(c=0;c<=2*a-2;c++)
     printf(" ");
    for(d=1;d<=2*a-1;d++)
      printf("%c",m);
  printf("\n");
    e=a-1;
  }
for(a=e+1;a<=2*e-1;a++)
 {for(c=0;c<=2*a-2*e-2;c++)
   printf(" ");
  for(d=1;d<=2*a-2*e-1;b++)
    printf("%c",m);
  printf("\n");}

 f=2*e*e-1;
  g=N-f;
   printf("%d\n",g);
return 0;
}


