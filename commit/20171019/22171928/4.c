#include <stdio.h>
int main(void)
{
  int n, x, y;
  int flag = 0;
  scanf("%d", &n);
  int half = n / 2;
     for(x = 1; x <= half; ++x) 
{
       for(y = x; y <= half; ++y)
{
       if(x * x + y * y == n) 
{
     flag = 1;
     printf("%d %d\n", x, y);
}
}	
}
  if(!flag)
  printf("No Solution\n");
return 0;
}

