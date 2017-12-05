#include<stdio.h>
<<<<<<< HEAD
#include<math.h>
int main()
{
  unsigned long int a,b,c;
  scanf("%u,%u,%u",&a,&b,&c);
 
  unsigned long int x,y;
  x=pow(a,b);
  y=x%c;

  printf("%u\n",y);
  return 0;
}
  
=======
int main()
{
 int a,b,c;
 double k;

 scanf("%d,%d,%d",a,b,c);

 k=a^b%c;

 printf("%lf\n",k);
 return 0;
}

>>>>>>> 0b429a8e6a7e661e2f7c412d138481529d560c82
