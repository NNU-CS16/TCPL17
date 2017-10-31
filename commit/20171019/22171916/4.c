#include<stdio.h>
int main()
{
int n,x,y,r,i;
       scanf("%d",&n);
       for (i=2;i<=n-1;i++)
         if (n%i==0)
            break;
       if (i<n)
        { 
         for (x=1;x*x<n;x++)
          for (y=1; ;y++)
            {r=x*x+y*y;
               if (r<n) continue;
               if (r == n && x<=y) printf("%d %d\n",x,y);
        
               break;
       
            }
       
    return 0;
       }
      else printf("No Solution");    
}
