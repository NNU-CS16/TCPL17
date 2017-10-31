#include<stdio.h> 
  
  #define MaxSize 100
  char List[MaxSize][MaxSize];
  
  int main()
 {

  
     int num = 0;
     while(scanf("%s", List[num]) != EOF)
         num++;
 
     for(int i=num-1; i>=0; --i) {
         printf("%s", List[i]);
         if(i != 0)  printf(" ");
         else printf("\n");
     }

     return 0;
}
