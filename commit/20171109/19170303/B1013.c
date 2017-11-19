#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int m;
    for (m=2; m<=sqrt(n); m++)
    {
        if(n % m == 0)
                return 1;
    }
    return -1;
}

int main()
{
  int M,N,i;
  int h=0;
  int a=0;
  scanf("%d%d", &M, &N);
  for(i=1; i<110000; i++) 
  {
    if (prime(i) == -1)
  {  
      a=a+1;
     if (a>M)
   {
     printf("%d",i);
     ++h;
     if(a>N) break;
   if(h == 10)
   {
     printf("\n");
     h=0;
   }
   else
      printf(" ");
   }
  }
  }
  return 0;
}
