#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int x,y;
    int flag=1;
    scanf("%d",&n);

    for(x=1;x<sqrt(n);x++)
    {
      for(y=x;y<sqrt(n);y++)
      {
        if(x*x+y*y==n)
        {
          printf("%d %d\n",x,y);
          flag=0;
        }
      }
    }
        if(flag!=0)
            printf("No solution");
        return 0;
}
