#include<stdio.h>
int main()
{
  int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
 
  if(x==y)
   {
    printf("C\n");
   }
  else
   {
    if(x==z)
      printf("B\n");
    else
      printf("A\n");
    }
   return 0;
}
