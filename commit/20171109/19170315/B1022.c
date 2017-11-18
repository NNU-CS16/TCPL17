#include <stdio.h>
  
  int main()
  {
      int A, B, D;
      scanf("%d %d %d",&A,&B,&D);
      int C = A + B;
      int a[32] = {0};
      int i = 0, num = 0;
      do
      {
          a[i] = C % D;
          C /= D;
          i++;
          num++;
      }while(C > 0);
      for(i = num - 1; i >= 0; i--)
      {
          printf("%d",a[i]);
      }
      printf("\n");
      return 0;
  }
