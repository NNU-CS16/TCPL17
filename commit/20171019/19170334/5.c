#include <stdio.h>

int main()
{
  int m=0,n=0;
  
  char a;
  while((a=getchar())!='.'){
    if(a!=' '){
      if(m>0&&n>0){
      printf("%d ",m);
      m=0;
      }
      m++;
      n=0;
      continue;
    }
    if(a=' '){
      n++;
    }
  }
  if(m>0){
    printf("%d",m);
  }
  return 0;
}
