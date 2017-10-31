#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
      int N;
      printf("Input N= ");
      scanf("%d\n",&N);
      int i,number;
      srand((unsigned)time(NULL));
      for (i=1;i<=N;i++)
       {
         number=rand()%100;
         printf("%d\t",number);
       } 
       return 0;
}

