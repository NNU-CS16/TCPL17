#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int N;
   srand((unsigned)time(NULL));
   for(N=0;N<100000;N++)   
   N=rand()%100+1;
   printf("%d\n",N);



   return 0;
}
