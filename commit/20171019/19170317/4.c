#include<stdio.h>
int main()
{
    int N;
    printf("请给出正整数N(<=10000)");
    while(scanf("%d",&N)!=EOF)
    {
      int X,Y;
      int bool=0;
      for(X=1;X<=70;++X)
      {
        for(Y=X;Y<=70;++Y)
        {
          if(X*X+Y*Y==N)
          {
            bool=1;
            printf("%d %d\n",X,Y);
          }
        }
      }
      if(bool==0)
        printf("No Solution");
    }
    return 0;
}

