#include<stdio.h>
#include<math.h>
int main()
{
 long int x, y,a, N;
  printf("输入N=");
  scanf("%ld",&N);
  int flag = 1;
  a = N / 2;
  for(x = 1; x < N; x ++)
{   
   for(y = x; y < N; y ++ )
  {
    if(x * x + y * y == N)
   {
          printf("%ld %ld\n",x,y);
         flag = 0;
}
        
}
}
  if(flag)
        printf("No Soluntion");
        return 0;

}
