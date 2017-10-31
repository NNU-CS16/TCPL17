#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,n,flag=1;
    scanf("%d",&n);
    
    for(x=1;x<100;x++)
    {
       for(y=x;y<100;y++)
       { 
           if(x*x+y*y==n)
           {
	      printf("%d %d\n",x,y);
              flag=0;
           }
       }
    }
    if(flag==1)
      printf("No Solution");
             
    return 0;

}
