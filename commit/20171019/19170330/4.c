#include<stdio.h>
int main()
{
  int N,X,Y;
  int flag=0;
  printf("Input N = ");
  scanf("%d",&N);
  int H;
  H=N/2;
  for (X=1;X<=H;X++)
    {
     for (Y=X;Y<=H;Y++)
      {
       if (X*X+Y*Y==N)
        {
         flag=1;
         printf("%d %d\n",X,Y);
        }
      }
    }
   if (!flag)
      printf("No Solution\n");
    
   return 0;
}

