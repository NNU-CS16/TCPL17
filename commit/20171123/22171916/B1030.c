#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
  return *((double *)a)-*((double *)b);
}
int main()
{
 double p;
 int i,N,len=0,newlen=0;
 scanf("%d %f",&N,&p);
 double a[N];
 double *P=a;
 for (i=0;i<N;i++)
   scanf("%1f",&a[i]);
 qsort(a,N,sizeof(double),cmp);
 for(i=0;i+len<N;i++)
  {
   double M=a[i]*p;
   while (*P<=M)
     {
      if(P-&a[0]==N)
      break;
      p++;
     }
  newlen=P-&a[i];
  if(newlen>len)
    len=newlen;

  }
 printf("%d\n",len);
 return 0;
}
