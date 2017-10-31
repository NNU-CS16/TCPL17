#include <stdio.h>
#include <stdlib.h>
  
  int main(void)
  {
    struct student{
      char name[11];
      char number[11];
      int val;
  };
   struct student *ps;
   int i, N;
   int Max = -1, Min = 101;
   int cMax, cMin;
   
   scanf("%d", &N);


     
   ps = (struct student *)malloc(N * sizeof(struct student));


     
   for(i = 0; i < N; i++)
   {
     scanf("%s %s %d", ps[i].name, ps[i].number, &(ps[i].val));  
   }
   for(i = 0; i < N; i++)
   {
     if(ps[i].val < Min)
     {
       cMin = i;
       Min = ps[i].val;  
    }
     
     if(ps[i].val > Max)
     {
       cMax = i;
       Max = ps[i].val;
     }
   }
 
   printf("%s %s\n", ps[cMax].name, ps[cMax].number);
   printf("%s %s\n", ps[cMin].name, ps[cMin].number);
 
   free(ps);
   

   
   return 0;
 }
