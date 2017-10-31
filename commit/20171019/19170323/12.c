#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

 int N;
 double x,y,m,n;
 scanf("%d",&N);/*N<=100000*/
 srand(time(NULL));

 int i,arr[N];
 for(i=0;i<N;i++)
   {
    arr[i]=rand()%N;
   }
 
 int max=arr[0];
 int j,row=0;
 for(j=0;j<N;i++)
  { if(max<arr[j])
  {max=arr[j];
   row=j;}
   else {max=max;row=row;}
  }
  printf("arr[%d]=%d",row,max); 

 int min=arr[0],col=0;
 for(j=0;j<N;j++)
  {  if(min>arr[j])
   {min=arr[j];
    col=j;}
  else {min=min;col=col;}
  }
  printf("a[%d]=%d",col,min);

  x=max+min;
  y=(max+min)/2;
  m=((max-y)*(max-y)+(min-y)*(min-y))/2;
  n=sqrt(m);
 
 printf("%lf%lf%lf%lf",x,y,m,n);
 
 return 0;
}
