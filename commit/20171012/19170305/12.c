#include<stdio.h>

int min(int x,int y);


int main()
{
   int min_a,x,y,m,n,t;
   scanf("%d/%d",&x,&y);
   m=x;
   n=y;
   for(t=1;t<=min_a-1;t++)
   {
      if(m%t==0&&n%t==0)
        { 
           m=m/t;
           n=n/t;
           t=1;
        }
      else
        {
         m=m;
         n=n;
        }
   }
   printf("%d/%d\n",m,n);

}


int min(int x,int y)
{
int z;
z=x<y?x:y;
return z;
} 
